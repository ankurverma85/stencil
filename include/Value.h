#pragma once
#include "shared_string.h"
#include <cstdint>
#include <cmath>

template <typename TValue> struct ValueTraits;
template <> struct ValueTraits<size_t>;
template <> struct ValueTraits<uint32_t>;
template <> struct ValueTraits<uint64_t>;
template <> struct ValueTraits<int64_t>;
template <> struct ValueTraits<int32_t>;
template <> struct ValueTraits<short>;
template <> struct ValueTraits<unsigned short>;
template <> struct ValueTraits<bool>;
template <> struct ValueTraits<double>;
template <> struct ValueTraits<shared_string>;

struct Value
{
    enum class Type
    {
        Empty,
        Integer,
        Double,
        String,
        Unknown
    } _type
        = Type::Empty;

    uint64_t      _iVal = 0;
    double        _dVal = 0;
    shared_string _sVal;

    template <typename T> struct UnknownTraits
    {
        static constexpr auto ValueType() { return Type::Unknown; }
        static void           Get(Value& obj) { throw 1; }
        static void           Get(const Value& obj) { throw 1; }
        static void           Check() { throw 1; }
    };

    template <typename T> struct IntegralTraits
    {
        static constexpr auto ValueType() { return Type::Integer; }
        static auto&          Get(Value& obj) { return obj._iVal; }
        static const auto&    Get(const Value& obj) { return obj._iVal; }
        // static void Check() { if (obj._iVal < std::numeric_limits<T>::min() || obj.iVal >
        // std::numeric_limits<T>::max()); throw 1; }
    };

    template <typename T> struct StringTraits
    {
        static constexpr auto ValueType() { return Type::String; }
        static auto&          Get(Value& obj) { return obj._sVal; }
        static const auto&    Get(const Value& obj) { return obj._sVal; }
        static void           Check() {}
    };

    template <typename T> struct DoubleTraits
    {
        static constexpr auto ValueType() { return Type::Double; }
        static auto&          Get(Value& obj) { return obj._dVal; }
        static const auto&    Get(const Value& obj) { return obj._dVal; }
        static void           Check() {}
    };

    template <typename T> struct Supported
    {
        static constexpr bool value = ValueTraits<T>::ValueType() != Type::Unknown;
    };

    public:
    struct UnsupportedCast
    {
    };
    void _check(Type type) const
    {
        if (_type != type) throw 1;
    }

    /*  template <typename T>
      operator T() const { _check(ValueTraits<T>::ValueType()); return static_cast<T>(ValueTraits<T>::Get(*this)); }
  */
    operator shared_string() const
    {
        _check(Type::String);
        return _sVal;
    }
    operator size_t() const;

    //   operator double()        const { _check(Type::Double);  return _dVal; }
    //   operator bool()          const { _check(Type::Integer); return !!_iVal; }
    //   operator int()           const { _check(Type::Integer); return (int)_iVal; }
    //   operator short()         const { _check(Type::Integer); return (short)_iVal; }

    Type GetType() const { return _type; }
    template <typename T> Value(T val) : _type(ValueTraits<T>::ValueType()) { ValueTraits<T>::Get(*this) = val; }
    /*
    Value(double val) : _type(Type::Double), _dVal(val) {}
    Value(bool val) : _type(Type::Integer), _iVal(val) {}
    Value(int val) : _type(Type::Integer), _iVal(val) {}
    Value(short val) : _type(Type::Integer), _iVal(val) {}
    Value(uint64_t val) : _type(Type::Integer), _iVal(val) {}
    Value(size_t val) : _type(Type::Integer), _iVal(val) {}
    */
    Value() {}
    Value(std::nullptr_t) {}

    static bool _strtobool(shared_string str)
    {
        auto ch = str.at(0);
        if (ch == 't' || ch == 'T' || ch == 'y' || ch == 'Y' || ch == '1')
            return true;
        else if (ch == 'f' || ch == 'F' || ch == 'n' || ch == 'N' || ch == '0')
            return false;
        else
            throw UnsupportedCast();
    }

    static int _strtoint(shared_string str) { return atoi(str.c_str()); }

    static double _strtodouble(shared_string str) { return atof(str.c_str()); }

    static shared_string _booltostr(bool val) { return (val ? shared_string::make("true") : shared_string::make("false")); }
    static shared_string _inttostr(uint64_t val) { return shared_string::make(std::to_string(val)); }
    static shared_string _doubletostr(double val) { return shared_string::make(std::to_string(val)); }

    static int _doubletoint(double val) { return (int)std::round(val); }

    Value cast_integer() const
    {
        switch (_type)
        {
        case Type::Empty: throw UnsupportedCast();
        case Type::Integer: return Value(_iVal);
        case Type::Double: return Value(_doubletoint(_dVal));
        case Type::String: return Value(_strtoint(_sVal));
        default: throw UnsupportedCast();
        }
    }

    Value cast_double() const
    {
        switch (_type)
        {
        case Type::Empty: throw UnsupportedCast();
        case Type::Integer: return Value((int)round(_dVal));
        case Type::Double: return Value(_dVal);
        case Type::String: return Value(_strtodouble(_sVal));
        default: throw UnsupportedCast();
        }
    }

    Value cast_string() const
    {
        switch (_type)
        {
        case Type::Empty: throw UnsupportedCast();
        case Type::Integer: return Value(_inttostr(_iVal));
        case Type::Double: return Value(_doubletostr(_dVal));
        case Type::String: return Value(_sVal);
        default: throw UnsupportedCast();
        }
    }

    Value cast(Type type) const
    {
        switch (type)
        {
        case Type::Empty: return Value();
        case Type::Integer: return cast_integer();
        case Type::Double: return cast_double();
        case Type::String: return cast_string();
        default: throw UnsupportedCast();
        }
    }

    template <typename T> T convert() const
    {
        auto casted = (*this).cast(ValueTraits<T>::ValueType());
        return static_cast<T>(ValueTraits<T>::Get(casted));
    }
};

template <typename T> struct ValueTraits : public Value::UnknownTraits<T>
{
};
// template <> struct ValueTraits<unsigned long> : public Value::IntegralTraits<unsigned long> { };
template <> struct ValueTraits<uint32_t> : public Value::IntegralTraits<uint64_t>
{
};
template <> struct ValueTraits<uint64_t> : public Value::IntegralTraits<uint64_t>
{
};
template <> struct ValueTraits<int64_t> : public Value::IntegralTraits<uint64_t>
{
};
template <> struct ValueTraits<int32_t> : public Value::IntegralTraits<uint64_t>
{
};
template <> struct ValueTraits<short> : public Value::IntegralTraits<uint64_t>
{
};
template <> struct ValueTraits<unsigned short> : public Value::IntegralTraits<unsigned short>
{
};
template <> struct ValueTraits<bool> : public Value::IntegralTraits<bool>
{
};
template <> struct ValueTraits<double> : public Value::DoubleTraits<double>
{
};
template <> struct ValueTraits<shared_string> : public Value::StringTraits<shared_string>
{
};

inline Value::operator ::size_t() const
{
    _check(ValueTraits<uint64_t>::ValueType());
    return static_cast<size_t>(ValueTraits<uint64_t>::Get(*this));
}