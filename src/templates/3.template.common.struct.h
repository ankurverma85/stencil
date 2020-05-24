// Anything here is not part of the generated code
struct ModelDefinition
{
};
const int         EnumKeyCount     = 0;
const int         EnumCount        = 0;
const int         zzFieldType_Idzz = 0;
const int         zzStruct_Idzz    = 0;
const int         zzUnion_Idzz     = 0;
const HandlerData zzFieldType_NativeHandlerDatazz{nullptr, nullptr, nullptr};
int               resolve_enum(const char** names, int count, const char* name)
{
    return 0;
}
struct zzFieldType_NativeTypezz
{
    int a;
};
struct zzChildFieldType_NativeTypezz
{
    int a;
};
struct zzReturnType_NativeTypezz
{
};
typedef void* Target;
class NativeHandler
{
    public:
    static const ITypeHandler* Make(const ModelDefinition* def, const TypeHandlerFactoryData handlerData) { return (ITypeHandler*)nullptr; }
};
typedef NativeHandler zzFieldType_NativeHandlerzz;
typedef NativeHandler zzReturnType_NativeHandlerzz;

namespace zzProgram_Namezz
{
namespace zzDataSource_Namezz
{
void* GetExtensionData()
{
    return nullptr;
}
}    // namespace zzDataSource_Namezz
}    // namespace zzProgram_Namezz

//<Template file="zzFileNamezz.h">
#pragma once
#include <DataModel.h>
namespace zzProgram_Namezz
{
//<Struct>
namespace zzStruct_Namezz
{
struct Data;
}
//</Struct>
//<Typedef>
typedef zzChildFieldType_NativeTypezz zzNamezz;
//</Typedef>
//<Struct>
namespace zzStruct_Namezz
{

struct Data :
    //<RelationshipTag>
    public zzTagType_NativeTypezz,
    //</RelationshipTag>
    public ReflectionBase::ObjMarker
{
    /*template <typename...TArgs> Data(TArgs&& ... args)
    {
        ReflectionBase::Construct<Data>(this, std::forward<TArgs>(args)...);
    }*/

    enum class FieldIndex
    {
        Invalid,
        //<Field Join=','>
        zzField_Namezz
        //</Field>
    };

    static constexpr std::string_view FieldAttributeValue(FieldIndex index, const std::string_view& key)
    {
        switch (index)
        {
            //<Field>
        case FieldIndex::zzField_Namezz:
            //<Attribute>
            if (key == "zzAttribute_Keyzz") return "zzAttribute_Valuezz";
            //</Attribute>
            return ::ReflectionServices::EmptyAttributeValue(key);
            //</Field>
        default: break;
        }
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    //<Field>
    private:
    zzFieldType_NativeTypezz _zzNamezz = zzInitialValuezz;

    public:
    zzFieldType_NativeTypezz&       zzNamezz() { return _zzNamezz; }
    const zzFieldType_NativeTypezz& zzNamezz() const { return _zzNamezz; }
    void                            zzNamezz(zzFieldType_NativeTypezz&& val) { _zzNamezz = std::move(val); }

    zzFieldType_NativeTypezz& get_zzNamezz()
    {
        return _zzNamezz;
        ;
    }
    void set_zzNamezz(zzFieldType_NativeTypezz&& val) { _zzNamezz = std::move(val); }

    //</Field>
};

}    // namespace zzStruct_Namezz
//</Struct>

//<Union>
namespace zzUnion_Namezz
{
struct Union;
}
//</Union>
//<Typedef>
typedef zzChildFieldType_NativeTypezz zzNamezz;
//</Typedef>
//<Union>
namespace zzUnion_Namezz
{
enum class UnionType
{
    Invalid,
    //<Field Join=','>
    zzField_Namezz
    //</Field>
};

struct Data : public ReflectionBase::ObjMarker
{
    UnionType _type;

    public:
    UnionType Type() const { return _type; }

    UnionType& get_Type() { return _type; }
    void       set_Type(UnionType&& val) { _type = (UnionType)std::move(val); }

    Data() : _type(UnionType::Invalid) {}

    public:
    enum class FieldIndex
    {
        Invalid,
        //<Field Join=','>
        zzField_Namezz
        //</Field>
    };

    static constexpr std::string_view FieldAttributeValue(FieldIndex index, const std::string_view& key)
    {
        switch (index)
        {
        //<Field>
        case FieldIndex::zzField_Namezz:
        {
            //<Attribute>
            if (key == "zzAttribute_Keyzz") return "zzAttribute_Valuezz";
            //</Attribute>
            return ::ReflectionServices::EmptyAttributeValue(key);
        }
            //</Field>

        default: break;
        }
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    //<FieldAttribute>
    template <FieldIndex TFieldType> static constexpr std::string_view FieldAttributeValue_zzFieldAttribute_Namezz();
    //</FieldAttribute>

    //<Field>

    private:
    zzFieldType_NativeTypezz _zzNamezz;

    public:
    zzFieldType_NativeTypezz&       zzNamezz() { return _zzNamezz; }
    const zzFieldType_NativeTypezz& zzNamezz() const { return _zzNamezz; }
    void                            zzNamezz(const zzFieldType_NativeTypezz& val) { _zzNamezz = val; }
    void                            zzNamezz(zzFieldType_NativeTypezz&& val) { _zzNamezz = std::move(val); }

    zzFieldType_NativeTypezz& get_zzNamezz()
    {
        return _zzNamezz;
        ;
    }
    void set_zzNamezz(zzFieldType_NativeTypezz&& val) { _zzNamezz = std::move(val); }

    //</Field>
};
}    // namespace zzUnion_Namezz
//</Union>

//<Interface>

struct zzInterface_Namezz : public ReflectionBase::Interface<zzInterface_Namezz>
{
    public:
    zzInterface_Namezz() : ReflectionBase::Interface<zzInterface_Namezz>(this) {}
    //<Function>
    virtual zzReturnType_NativeTypezz zzFunction_Namezz(
        //<Args_Field Join=','>
        zzFieldType_NativeTypezz const& zzNamezz
        //</Args_Field>
        )
        = 0;
    //</Function>
    // static std::unique_ptr<zzInterface_Namezz> Create();
};

struct zzInterface_NamezzFactory : public ReflectionBase::InterfaceFactory<zzInterface_Namezz>
{
    public:
    virtual std::unique_ptr<zzInterface_Namezz> Activate() = 0;
};

//<Function>
struct zzInterface_Namezz_zzFunction_Namezz_Args
{
    zzInterface_Namezz* instance = nullptr;

    //<Args_Field>
    zzFieldType_NativeTypezz  arg_zzNamezz{};
    zzFieldType_NativeTypezz& get_arg_zzNamezz() { return arg_zzNamezz; }
    void                      set_arg_zzNamezz(zzFieldType_NativeTypezz&& value) { arg_zzNamezz = std::move(value); }
    //</Args_Field>
};

//</Function>

//</Interface>
}    // namespace zzProgram_Namezz

//<Interface>
//<Function>
template <> struct ReflectionBase::TypeTraits<zzProgram_Namezz::zzInterface_Namezz_zzFunction_Namezz_Args&>
{
    //<Args_Field>

    struct Traits_arg_zzNamezz
    {
        using TOwner = zzProgram_Namezz::zzInterface_Namezz_zzFunction_Namezz_Args;
        static constexpr std::string_view    Name() { return "zzNamezz"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_zzNamezz; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_zzNamezz; }
    };
    //</Args_Field>

    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "zzFunction_Namezz"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using Handler = ::ReflectionServices::ReflectedStructHandler<zzProgram_Namezz::zzInterface_Namezz_zzFunction_Namezz_Args
                                                                 //<Args_Field>
                                                                 ,Traits_arg_zzNamezz
                                                                 //</Args_Field>
                                                                 >;
};
//</Function>

template <> struct ReflectionBase::InterfaceTraits<zzProgram_Namezz::zzInterface_Namezz>
{
    //<Function>
    struct ApiTraits_zzNamezz
    {
        using TOwner = zzProgram_Namezz::zzInterface_Namezz;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "zzNamezz"; }
        static constexpr bool                Static = false;
    };
    //</Function>

    using Apis = ::ReflectionBase::InterfaceApiPack<
        //<Function  Join=','>
        ApiTraits_zzNamezz
        //</Function>
        >;
};

//<Function>

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<zzProgram_Namezz::zzInterface_Namezz>::ApiTraits_zzNamezz>
{
    using ArgsStruct = zzProgram_Namezz::zzInterface_Namezz_zzFunction_Namezz_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "zzNamezz"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->zzNamezz(
            //<Args_Field Join=','>
            args.get_arg_zzNamezz()
            //</Args_Field>
        );
    }
};

//</Function>
#if (defined STENCIL_USING_WEBSERVICE) and (STENCIL_USING_WEBSERVICE > 0)
template <> struct WebServiceHandlerTraits<zzProgram_Namezz::zzInterface_Namezz>
{
    static constexpr const std::string_view Url() { return std::string_view("zzInterface_Namezz"); }
};
#endif

//</Interface>

//<Struct>

template <> struct ReflectionBase::TypeTraits<zzProgram_Namezz::zzStruct_Namezz::Data&>
{
    //<Field>

    struct Traits_zzNamezz
    {
        using TOwner = zzStruct_Program_Namezz::zzStruct_Namezz::Data;

        static constexpr std::string_view Name() { return "zzNamezz"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_zzNamezz; }
        static constexpr auto TPropertySetter() { return &TOwner::set_zzNamezz; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::zzField_Namezz, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{//<If HasDefaultValue='true'>
                                           ::ReflectionBase::Flag::HasDefaultValue,
                                           //</If>
                                           //<If IsOptional='true'>
                                           ::ReflectionBase::Flag::Optional,
                                           //</If>
                                           ::ReflectionBase::Flag::Max};
        }
    };
    //</Field>

    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "zzStruct_Namezz"; }
    static constexpr std::string_view           AttributeValue(const std::string_view& key)
    {
        //<Attribute>
        if (key == "zzAttribute_Keyzz") return "zzAttribute_Valuezz";
        //</Attribute>
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<zzProgram_Namezz::zzStruct_Namezz::Data,
                                                                 //<Field Join=','>
                                                                 Traits_zzNamezz
                                                                 //</Field>
                                                                 >;
};
//</Struct>

//<Union>

template <> struct ReflectionServices::EnumTraits<zzUnion_Program_Namezz::zzUnion_Namezz::UnionType>
{
    static constexpr const char* EnumStrings[] = {"Invalid",
                                                  //<Field>
                                                  "zzField_Namezz",
                                                  //</Field>

                                                  0};

    using ValueType = uint32_t;
};

template <> struct ValueTraits<zzUnion_Program_Namezz::zzUnion_Namezz::UnionType>
{
    static constexpr auto ValueType() { return Value::Type::Integer; }
    static void           Get(Value& /*obj*/) { throw 1; }
    static void           Get(const Value& /*obj*/) { throw 1; }
    static void           Check() { throw 1; }
};

template <> struct ReflectionBase::TypeTraits<zzUnion_Program_Namezz::zzUnion_Namezz::UnionType&>
{
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Value; }
    static constexpr std::string_view           Name() { return "zzUnion_Namezz"; }

    using Handler = ::ReflectionServices::EnumHandler<zzUnion_Program_Namezz::zzUnion_Namezz::UnionType>;
};

template <> struct ReflectionBase::TypeTraits<zzProgram_Namezz::zzUnion_Namezz::Data&>
{
    //<Field>
    struct Traits_zzNamezz
    {
        using TOwner = zzUnion_Program_Namezz::zzUnion_Namezz::Data;

        static constexpr std::string_view Name() { return "zzNamezz"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_zzNamezz; }
        static constexpr auto TPropertySetter() { return &TOwner::set_zzNamezz; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::zzField_Namezz, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{//<If HasDefaultValue='true'>
                                           ::ReflectionBase::Flag::HasDefaultValue,
                                           //</If>
                                           //<If IsOptional='true'>
                                           ::ReflectionBase::Flag::Optional,
                                           //</If>
                                           ::ReflectionBase::Flag::Max};
        }
    };
    //</Field>

    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "zzUnion_Namezz"; }
    static constexpr std::string_view           AttributeValue(const std::string_view& key)
    {
        //<Attribute>
        if (key == "zzAttribute_Keyzz") return "zzAttribute_Valuezz";
        //</Attribute>

        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    using Handler = ::ReflectionServices::ReflectedUnionHandler<zzProgram_Namezz::zzUnion_Namezz::Data,
                                                                zzUnion_Program_Namezz::zzUnion_Namezz::UnionType,
                                                                //<Field Join=','>
                                                                Traits_zzNamezz
                                                                //</Field>
                                                                >;
};
//</Union>
//</Template>
