#pragma once
#include <stencil/stencil.h>

// SECTION START: DECLARATIONS
#if true
namespace Service::MapPoint
{
struct Data;
}
template <> struct ReflectionBase::TypeTraits<Service::MapPoint::Data&>;
namespace Service::GeographicalArea
{
struct Data;
}
template <> struct ReflectionBase::TypeTraits<Service::GeographicalArea::Data&>;
namespace Service::DigitalAssetInfo
{
struct Data;
}
template <> struct ReflectionBase::TypeTraits<Service::DigitalAssetInfo::Data&>;
#endif
// SECTION END: DECLARATIONS

// SECTION START: Definitions
#if true
namespace Service
{
namespace MapPoint
{
struct Data;
}
namespace GeographicalArea
{
struct Data;
}
namespace DigitalAssetInfo
{
struct Data;
}
typedef shared_tree<shared_string> Keyword;
typedef shared_tree<shared_string> Entity;
typedef std::vector<::Service::MapPoint::Data> AreaPolygon;
typedef shared_tree<::Service::GeographicalArea::Data> GeographicalLocation;
typedef std::vector<shared_tree<shared_string>> Keywords;
typedef std::vector<shared_tree<shared_string>> Entities;
namespace MapPoint
{

struct Data :
    public ReflectionBase::ObjMarker
{
    /*template <typename...TArgs> Data(TArgs&& ... args)
    {
        ReflectionBase::Construct<Data>(this, std::forward<TArgs>(args)...);
    }*/

    enum class FieldIndex
    {
        Invalid,
        latitude
,        longitude
    };

    static constexpr size_t FieldCount()
    {
        return 0u
               + 1u
               + 1u
            ;
    }

    static constexpr std::string_view FieldAttributeValue(FieldIndex index, const std::string_view& key)
    {
        switch (index)
        {
        case FieldIndex::latitude:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::longitude:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::Invalid: break;

        default: break;
        }
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    private:
    int64_t _latitude = {};

    public:
    int64_t&       latitude() { return _latitude; }
    const int64_t& latitude() const { return _latitude; }
    void                            latitude(int64_t&& val) { _latitude = std::move(val); }
    int64_t&       get_latitude() { return _latitude; }

    bool isset_latitude() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::latitude); }

    void set_latitude(int64_t&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::latitude, _latitude, val);
        _latitude = std::move(val);
    }

#if 0
#endif
    private:
    int64_t _longitude = {};

    public:
    int64_t&       longitude() { return _longitude; }
    const int64_t& longitude() const { return _longitude; }
    void                            longitude(int64_t&& val) { _longitude = std::move(val); }
    int64_t&       get_longitude() { return _longitude; }

    bool isset_longitude() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::longitude); }

    void set_longitude(int64_t&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::longitude, _longitude, val);
        _longitude = std::move(val);
    }

#if 0
#endif
};

}    // namespace MapPoint
namespace GeographicalArea
{

struct Data :
    public ReflectionBase::ObjMarker
{
    /*template <typename...TArgs> Data(TArgs&& ... args)
    {
        ReflectionBase::Construct<Data>(this, std::forward<TArgs>(args)...);
    }*/

    enum class FieldIndex
    {
        Invalid,
        type
,        name
,        areaPolygon
    };

    static constexpr size_t FieldCount()
    {
        return 0u
               + 1u
               + 1u
               + 1u
            ;
    }

    static constexpr std::string_view FieldAttributeValue(FieldIndex index, const std::string_view& key)
    {
        switch (index)
        {
        case FieldIndex::type:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::name:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::areaPolygon:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::Invalid: break;

        default: break;
        }
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    private:
    shared_string _type = {};

    public:
    shared_string&       type() { return _type; }
    const shared_string& type() const { return _type; }
    void                            type(shared_string&& val) { _type = std::move(val); }
    shared_string&       get_type() { return _type; }

    bool isset_type() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::type); }

    void set_type(shared_string&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::type, _type, val);
        _type = std::move(val);
    }

#if 0
#endif
    private:
    shared_string _name = {};

    public:
    shared_string&       name() { return _name; }
    const shared_string& name() const { return _name; }
    void                            name(shared_string&& val) { _name = std::move(val); }
    shared_string&       get_name() { return _name; }

    bool isset_name() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::name); }

    void set_name(shared_string&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::name, _name, val);
        _name = std::move(val);
    }

#if 0
#endif
    private:
    std::vector<::Service::MapPoint::Data> _areaPolygon = {};

    public:
    std::vector<::Service::MapPoint::Data>&       areaPolygon() { return _areaPolygon; }
    const std::vector<::Service::MapPoint::Data>& areaPolygon() const { return _areaPolygon; }
    void                            areaPolygon(std::vector<::Service::MapPoint::Data>&& val) { _areaPolygon = std::move(val); }
    std::vector<::Service::MapPoint::Data>&       get_areaPolygon() { return _areaPolygon; }

    bool isset_areaPolygon() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::areaPolygon); }

    void set_areaPolygon(std::vector<::Service::MapPoint::Data>&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::areaPolygon, _areaPolygon, val);
        _areaPolygon = std::move(val);
    }

#if 0
#endif
};

}    // namespace GeographicalArea
namespace DigitalAssetInfo
{

struct Data :
    public ReflectionBase::ObjMarker
{
    /*template <typename...TArgs> Data(TArgs&& ... args)
    {
        ReflectionBase::Construct<Data>(this, std::forward<TArgs>(args)...);
    }*/

    enum class FieldIndex
    {
        Invalid,
        id
,        keywords
,        location
,        md5sum
,        thumbnailBlob
,        fileUrl
    };

    static constexpr size_t FieldCount()
    {
        return 0u
               + 1u
               + 1u
               + 1u
               + 1u
               + 1u
               + 1u
            ;
    }

    static constexpr std::string_view FieldAttributeValue(FieldIndex index, const std::string_view& key)
    {
        switch (index)
        {
        case FieldIndex::id:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::keywords:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::location:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::md5sum:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::thumbnailBlob:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::fileUrl:
            return ::ReflectionServices::EmptyAttributeValue(key);
        case FieldIndex::Invalid: break;

        default: break;
        }
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    private:
    int32_t _id = {};

    public:
    int32_t&       id() { return _id; }
    const int32_t& id() const { return _id; }
    void                            id(int32_t&& val) { _id = std::move(val); }
    int32_t&       get_id() { return _id; }

    bool isset_id() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::id); }

    void set_id(int32_t&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::id, _id, val);
        _id = std::move(val);
    }

#if 0
#endif
    private:
    std::vector<shared_tree<shared_string>> _keywords = {};

    public:
    std::vector<shared_tree<shared_string>>&       keywords() { return _keywords; }
    const std::vector<shared_tree<shared_string>>& keywords() const { return _keywords; }
    void                            keywords(std::vector<shared_tree<shared_string>>&& val) { _keywords = std::move(val); }
    std::vector<shared_tree<shared_string>>&       get_keywords() { return _keywords; }

    bool isset_keywords() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::keywords); }

    void set_keywords(std::vector<shared_tree<shared_string>>&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::keywords, _keywords, val);
        _keywords = std::move(val);
    }

#if 0
#endif
    private:
    shared_tree<::Service::GeographicalArea::Data> _location = {};

    public:
    shared_tree<::Service::GeographicalArea::Data>&       location() { return _location; }
    const shared_tree<::Service::GeographicalArea::Data>& location() const { return _location; }
    void                            location(shared_tree<::Service::GeographicalArea::Data>&& val) { _location = std::move(val); }
    shared_tree<::Service::GeographicalArea::Data>&       get_location() { return _location; }

    bool isset_location() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::location); }

    void set_location(shared_tree<::Service::GeographicalArea::Data>&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::location, _location, val);
        _location = std::move(val);
    }

#if 0
#endif
    private:
    int64_t _md5sum = {};

    public:
    int64_t&       md5sum() { return _md5sum; }
    const int64_t& md5sum() const { return _md5sum; }
    void                            md5sum(int64_t&& val) { _md5sum = std::move(val); }
    int64_t&       get_md5sum() { return _md5sum; }

    bool isset_md5sum() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::md5sum); }

    void set_md5sum(int64_t&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::md5sum, _md5sum, val);
        _md5sum = std::move(val);
    }

#if 0
#endif
    private:
    shared_string _thumbnailBlob = {};

    public:
    shared_string&       thumbnailBlob() { return _thumbnailBlob; }
    const shared_string& thumbnailBlob() const { return _thumbnailBlob; }
    void                            thumbnailBlob(shared_string&& val) { _thumbnailBlob = std::move(val); }
    shared_string&       get_thumbnailBlob() { return _thumbnailBlob; }

    bool isset_thumbnailBlob() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::thumbnailBlob); }

    void set_thumbnailBlob(shared_string&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::thumbnailBlob, _thumbnailBlob, val);
        _thumbnailBlob = std::move(val);
    }

#if 0
#endif
    private:
    shared_string _fileUrl = {};

    public:
    shared_string&       fileUrl() { return _fileUrl; }
    const shared_string& fileUrl() const { return _fileUrl; }
    void                            fileUrl(shared_string&& val) { _fileUrl = std::move(val); }
    shared_string&       get_fileUrl() { return _fileUrl; }

    bool isset_fileUrl() const { return Stencil::OptionalPropsT<Data>::IsSet(*this, FieldIndex::fileUrl); }

    void set_fileUrl(shared_string&& val)
    {
        Stencil::OptionalPropsT<Data>::OnChangeRequested(*this, FieldIndex::fileUrl, _fileUrl, val);
        _fileUrl = std::move(val);
    }

#if 0
#endif
};

}    // namespace DigitalAssetInfo
typedef shared_tree<shared_string> Keyword;
typedef shared_tree<shared_string> Entity;
typedef std::vector<::Service::MapPoint::Data> AreaPolygon;
typedef shared_tree<::Service::GeographicalArea::Data> GeographicalLocation;
typedef std::vector<shared_tree<shared_string>> Keywords;
typedef std::vector<shared_tree<shared_string>> Entities;
struct KeywordS : public ReflectionBase::Interface<KeywordS>
{
    public:
    KeywordS()          = default;
    virtual ~KeywordS() = default;
    DELETE_COPY_AND_MOVE(KeywordS);
    virtual shared_tree<shared_string> Find(
        shared_tree<shared_string> const& root
,        shared_string const& query
,        shared_string const& type
        )
        = 0;
    virtual shared_tree<shared_string> Create(
        shared_string const& word
,        shared_tree<shared_string> const& parent
        )
        = 0;
    virtual int32_t Delete(
        )
        = 0;
    virtual int32_t Modify(
        shared_string const& word
        )
        = 0;
    virtual int32_t SetParent(
        shared_tree<shared_string> const& parent
        )
        = 0;
    // static std::unique_ptr<KeywordS> Create();
};

struct KeywordSFactory : public ReflectionBase::InterfaceFactory<KeywordS>
{
    public:
    virtual std::unique_ptr<KeywordS> Activate() = 0;
    virtual ~KeywordSFactory()                   = default;
};

struct KeywordS_Find_Args
{
    KeywordS* instance = nullptr;

    shared_tree<shared_string>        arg_root{};
    shared_tree<shared_string>&       get_arg_root() { return arg_root; }
    shared_tree<shared_string> const& get_carg_root() const { return arg_root; }
    void                            set_arg_root(shared_tree<shared_string>&& value) { arg_root = std::move(value); }
    shared_string        arg_query{};
    shared_string&       get_arg_query() { return arg_query; }
    shared_string const& get_carg_query() const { return arg_query; }
    void                            set_arg_query(shared_string&& value) { arg_query = std::move(value); }
    shared_string        arg_type{};
    shared_string&       get_arg_type() { return arg_type; }
    shared_string const& get_carg_type() const { return arg_type; }
    void                            set_arg_type(shared_string&& value) { arg_type = std::move(value); }
};

struct KeywordS_Create_Args
{
    KeywordS* instance = nullptr;

    shared_string        arg_word{};
    shared_string&       get_arg_word() { return arg_word; }
    shared_string const& get_carg_word() const { return arg_word; }
    void                            set_arg_word(shared_string&& value) { arg_word = std::move(value); }
    shared_tree<shared_string>        arg_parent{};
    shared_tree<shared_string>&       get_arg_parent() { return arg_parent; }
    shared_tree<shared_string> const& get_carg_parent() const { return arg_parent; }
    void                            set_arg_parent(shared_tree<shared_string>&& value) { arg_parent = std::move(value); }
};

struct KeywordS_Delete_Args
{
    KeywordS* instance = nullptr;

};

struct KeywordS_Modify_Args
{
    KeywordS* instance = nullptr;

    shared_string        arg_word{};
    shared_string&       get_arg_word() { return arg_word; }
    shared_string const& get_carg_word() const { return arg_word; }
    void                            set_arg_word(shared_string&& value) { arg_word = std::move(value); }
};

struct KeywordS_SetParent_Args
{
    KeywordS* instance = nullptr;

    shared_tree<shared_string>        arg_parent{};
    shared_tree<shared_string>&       get_arg_parent() { return arg_parent; }
    shared_tree<shared_string> const& get_carg_parent() const { return arg_parent; }
    void                            set_arg_parent(shared_tree<shared_string>&& value) { arg_parent = std::move(value); }
};

struct Content : public ReflectionBase::Interface<Content>
{
    public:
    Content()          = default;
    virtual ~Content() = default;
    DELETE_COPY_AND_MOVE(Content);
    virtual int32_t AddKeyword(
        shared_tree<shared_string> const& keyword
        )
        = 0;
    virtual int32_t RemoveKeyword(
        shared_tree<shared_string> const& keyword
        )
        = 0;
    // static std::unique_ptr<Content> Create();
};

struct ContentFactory : public ReflectionBase::InterfaceFactory<Content>
{
    public:
    virtual std::unique_ptr<Content> Activate() = 0;
    virtual ~ContentFactory()                   = default;
};

struct Content_AddKeyword_Args
{
    Content* instance = nullptr;

    shared_tree<shared_string>        arg_keyword{};
    shared_tree<shared_string>&       get_arg_keyword() { return arg_keyword; }
    shared_tree<shared_string> const& get_carg_keyword() const { return arg_keyword; }
    void                            set_arg_keyword(shared_tree<shared_string>&& value) { arg_keyword = std::move(value); }
};

struct Content_RemoveKeyword_Args
{
    Content* instance = nullptr;

    shared_tree<shared_string>        arg_keyword{};
    shared_tree<shared_string>&       get_arg_keyword() { return arg_keyword; }
    shared_tree<shared_string> const& get_carg_keyword() const { return arg_keyword; }
    void                            set_arg_keyword(shared_tree<shared_string>&& value) { arg_keyword = std::move(value); }
};

struct Search : public ReflectionBase::Interface<Search>
{
    public:
    Search()          = default;
    virtual ~Search() = default;
    DELETE_COPY_AND_MOVE(Search);
    virtual std::vector<long> SearchByKeywords(
        std::vector<shared_tree<shared_string>> const& keywords
        )
        = 0;
    virtual std::vector<long> SearchByDate(
        int64_t const& startDate
,        int64_t const& endDate
        )
        = 0;
    // static std::unique_ptr<Search> Create();
};

struct SearchFactory : public ReflectionBase::InterfaceFactory<Search>
{
    public:
    virtual std::unique_ptr<Search> Activate() = 0;
    virtual ~SearchFactory()                   = default;
};

struct Search_SearchByKeywords_Args
{
    Search* instance = nullptr;

    std::vector<shared_tree<shared_string>>        arg_keywords{};
    std::vector<shared_tree<shared_string>>&       get_arg_keywords() { return arg_keywords; }
    std::vector<shared_tree<shared_string>> const& get_carg_keywords() const { return arg_keywords; }
    void                            set_arg_keywords(std::vector<shared_tree<shared_string>>&& value) { arg_keywords = std::move(value); }
};

struct Search_SearchByDate_Args
{
    Search* instance = nullptr;

    int64_t        arg_startDate{};
    int64_t&       get_arg_startDate() { return arg_startDate; }
    int64_t const& get_carg_startDate() const { return arg_startDate; }
    void                            set_arg_startDate(int64_t&& value) { arg_startDate = std::move(value); }
    int64_t        arg_endDate{};
    int64_t&       get_arg_endDate() { return arg_endDate; }
    int64_t const& get_carg_endDate() const { return arg_endDate; }
    void                            set_arg_endDate(int64_t&& value) { arg_endDate = std::move(value); }
};

struct Store : public ReflectionBase::Interface<Store>
{
    public:
    Store()          = default;
    virtual ~Store() = default;
    DELETE_COPY_AND_MOVE(Store);
    virtual ::Service::DigitalAssetInfo::Data Upload(
        shared_string const& file
        )
        = 0;
    virtual shared_string Download(
        long const& content
        )
        = 0;
    // static std::unique_ptr<Store> Create();
};

struct StoreFactory : public ReflectionBase::InterfaceFactory<Store>
{
    public:
    virtual std::unique_ptr<Store> Activate() = 0;
    virtual ~StoreFactory()                   = default;
};

struct Store_Upload_Args
{
    Store* instance = nullptr;

    shared_string        arg_file{};
    shared_string&       get_arg_file() { return arg_file; }
    shared_string const& get_carg_file() const { return arg_file; }
    void                            set_arg_file(shared_string&& value) { arg_file = std::move(value); }
};

struct Store_Download_Args
{
    Store* instance = nullptr;

    long        arg_content{};
    long&       get_arg_content() { return arg_content; }
    long const& get_carg_content() const { return arg_content; }
    void                            set_arg_content(long&& value) { arg_content = std::move(value); }
};

}    // namespace Service
#endif
// SECTION END: Definitions

// SECTION START: Template specializations
#if true

// SECTION:
template <> struct ReflectionBase::TypeTraits<Service::KeywordS_Find_Args&>
{
    struct Traits_arg_root
    {
        using TOwner     = Service::KeywordS_Find_Args;
        using TFieldType = shared_tree<shared_string>;

        static constexpr std::string_view    Name() { return "root"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_root; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_root; }
    };
    struct Traits_arg_query
    {
        using TOwner     = Service::KeywordS_Find_Args;
        using TFieldType = shared_string;

        static constexpr std::string_view    Name() { return "query"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_query; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_query; }
    };
    struct Traits_arg_type
    {
        using TOwner     = Service::KeywordS_Find_Args;
        using TFieldType = shared_string;

        static constexpr std::string_view    Name() { return "type"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_type; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_type; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "Find"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::KeywordS_Find_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_root(), obj2.get_carg_root())
               && ReflectionBase::AreEqual(obj1.get_carg_query(), obj2.get_carg_query())
               && ReflectionBase::AreEqual(obj1.get_carg_type(), obj2.get_carg_type())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::KeywordS_Find_Args
                                                                 ,
                                                                 Traits_arg_root
                                                                 ,
                                                                 Traits_arg_query
                                                                 ,
                                                                 Traits_arg_type
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::KeywordS_Create_Args&>
{
    struct Traits_arg_word
    {
        using TOwner     = Service::KeywordS_Create_Args;
        using TFieldType = shared_string;

        static constexpr std::string_view    Name() { return "word"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_word; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_word; }
    };
    struct Traits_arg_parent
    {
        using TOwner     = Service::KeywordS_Create_Args;
        using TFieldType = shared_tree<shared_string>;

        static constexpr std::string_view    Name() { return "parent"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_parent; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_parent; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "Create"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::KeywordS_Create_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_word(), obj2.get_carg_word())
               && ReflectionBase::AreEqual(obj1.get_carg_parent(), obj2.get_carg_parent())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::KeywordS_Create_Args
                                                                 ,
                                                                 Traits_arg_word
                                                                 ,
                                                                 Traits_arg_parent
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::KeywordS_Delete_Args&>
{
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "Delete"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::KeywordS_Delete_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::KeywordS_Delete_Args
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::KeywordS_Modify_Args&>
{
    struct Traits_arg_word
    {
        using TOwner     = Service::KeywordS_Modify_Args;
        using TFieldType = shared_string;

        static constexpr std::string_view    Name() { return "word"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_word; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_word; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "Modify"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::KeywordS_Modify_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_word(), obj2.get_carg_word())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::KeywordS_Modify_Args
                                                                 ,
                                                                 Traits_arg_word
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::KeywordS_SetParent_Args&>
{
    struct Traits_arg_parent
    {
        using TOwner     = Service::KeywordS_SetParent_Args;
        using TFieldType = shared_tree<shared_string>;

        static constexpr std::string_view    Name() { return "parent"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_parent; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_parent; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "SetParent"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::KeywordS_SetParent_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_parent(), obj2.get_carg_parent())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::KeywordS_SetParent_Args
                                                                 ,
                                                                 Traits_arg_parent
                                                                 >;
};
template <> struct ReflectionBase::InterfaceTraits<Service::KeywordS>
{
    struct ApiTraits_Find
    {
        using TOwner = Service::KeywordS;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "Find"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_Create
    {
        using TOwner = Service::KeywordS;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "Create"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_Delete
    {
        using TOwner = Service::KeywordS;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "Delete"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_Modify
    {
        using TOwner = Service::KeywordS;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "Modify"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_SetParent
    {
        using TOwner = Service::KeywordS;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "SetParent"; }
        static constexpr bool                Static = false;
    };
    using Apis = ::ReflectionBase::InterfaceApiPack<
        ApiTraits_Find
,        ApiTraits_Create
,        ApiTraits_Delete
,        ApiTraits_Modify
,        ApiTraits_SetParent
        >;
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::KeywordS>::ApiTraits_Find>
{
    using ArgsStruct = Service::KeywordS_Find_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "Find"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->Find(
            args.get_arg_root()
,            args.get_arg_query()
,            args.get_arg_type()
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::KeywordS>::ApiTraits_Create>
{
    using ArgsStruct = Service::KeywordS_Create_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "Create"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->Create(
            args.get_arg_word()
,            args.get_arg_parent()
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::KeywordS>::ApiTraits_Delete>
{
    using ArgsStruct = Service::KeywordS_Delete_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "Delete"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->Delete(
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::KeywordS>::ApiTraits_Modify>
{
    using ArgsStruct = Service::KeywordS_Modify_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "Modify"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->Modify(
            args.get_arg_word()
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::KeywordS>::ApiTraits_SetParent>
{
    using ArgsStruct = Service::KeywordS_SetParent_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "SetParent"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->SetParent(
            args.get_arg_parent()
        );
    }
};

#if ((defined STENCIL_USING_WEBSERVICE) and (STENCIL_USING_WEBSERVICE > 0))
template <> struct WebServiceHandlerTraits<Service::KeywordS>
{
    static constexpr const std::string_view Url() { return std::string_view("KeywordS"); }
};
#endif

template <> struct ReflectionBase::TypeTraits<Service::Content_AddKeyword_Args&>
{
    struct Traits_arg_keyword
    {
        using TOwner     = Service::Content_AddKeyword_Args;
        using TFieldType = shared_tree<shared_string>;

        static constexpr std::string_view    Name() { return "keyword"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_keyword; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_keyword; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "AddKeyword"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::Content_AddKeyword_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_keyword(), obj2.get_carg_keyword())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::Content_AddKeyword_Args
                                                                 ,
                                                                 Traits_arg_keyword
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::Content_RemoveKeyword_Args&>
{
    struct Traits_arg_keyword
    {
        using TOwner     = Service::Content_RemoveKeyword_Args;
        using TFieldType = shared_tree<shared_string>;

        static constexpr std::string_view    Name() { return "keyword"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_keyword; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_keyword; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "RemoveKeyword"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::Content_RemoveKeyword_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_keyword(), obj2.get_carg_keyword())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::Content_RemoveKeyword_Args
                                                                 ,
                                                                 Traits_arg_keyword
                                                                 >;
};
template <> struct ReflectionBase::InterfaceTraits<Service::Content>
{
    struct ApiTraits_AddKeyword
    {
        using TOwner = Service::Content;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "AddKeyword"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_RemoveKeyword
    {
        using TOwner = Service::Content;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "RemoveKeyword"; }
        static constexpr bool                Static = false;
    };
    using Apis = ::ReflectionBase::InterfaceApiPack<
        ApiTraits_AddKeyword
,        ApiTraits_RemoveKeyword
        >;
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::Content>::ApiTraits_AddKeyword>
{
    using ArgsStruct = Service::Content_AddKeyword_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "AddKeyword"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->AddKeyword(
            args.get_arg_keyword()
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::Content>::ApiTraits_RemoveKeyword>
{
    using ArgsStruct = Service::Content_RemoveKeyword_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "RemoveKeyword"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->RemoveKeyword(
            args.get_arg_keyword()
        );
    }
};

#if ((defined STENCIL_USING_WEBSERVICE) and (STENCIL_USING_WEBSERVICE > 0))
template <> struct WebServiceHandlerTraits<Service::Content>
{
    static constexpr const std::string_view Url() { return std::string_view("Content"); }
};
#endif

template <> struct ReflectionBase::TypeTraits<Service::Search_SearchByKeywords_Args&>
{
    struct Traits_arg_keywords
    {
        using TOwner     = Service::Search_SearchByKeywords_Args;
        using TFieldType = std::vector<shared_tree<shared_string>>;

        static constexpr std::string_view    Name() { return "keywords"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_keywords; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_keywords; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "SearchByKeywords"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::Search_SearchByKeywords_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_keywords(), obj2.get_carg_keywords())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::Search_SearchByKeywords_Args
                                                                 ,
                                                                 Traits_arg_keywords
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::Search_SearchByDate_Args&>
{
    struct Traits_arg_startDate
    {
        using TOwner     = Service::Search_SearchByDate_Args;
        using TFieldType = int64_t;

        static constexpr std::string_view    Name() { return "startDate"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_startDate; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_startDate; }
    };
    struct Traits_arg_endDate
    {
        using TOwner     = Service::Search_SearchByDate_Args;
        using TFieldType = int64_t;

        static constexpr std::string_view    Name() { return "endDate"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_endDate; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_endDate; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "SearchByDate"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::Search_SearchByDate_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_startDate(), obj2.get_carg_startDate())
               && ReflectionBase::AreEqual(obj1.get_carg_endDate(), obj2.get_carg_endDate())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::Search_SearchByDate_Args
                                                                 ,
                                                                 Traits_arg_startDate
                                                                 ,
                                                                 Traits_arg_endDate
                                                                 >;
};
template <> struct ReflectionBase::InterfaceTraits<Service::Search>
{
    struct ApiTraits_SearchByKeywords
    {
        using TOwner = Service::Search;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "SearchByKeywords"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_SearchByDate
    {
        using TOwner = Service::Search;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "SearchByDate"; }
        static constexpr bool                Static = false;
    };
    using Apis = ::ReflectionBase::InterfaceApiPack<
        ApiTraits_SearchByKeywords
,        ApiTraits_SearchByDate
        >;
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::Search>::ApiTraits_SearchByKeywords>
{
    using ArgsStruct = Service::Search_SearchByKeywords_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "SearchByKeywords"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->SearchByKeywords(
            args.get_arg_keywords()
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::Search>::ApiTraits_SearchByDate>
{
    using ArgsStruct = Service::Search_SearchByDate_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "SearchByDate"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->SearchByDate(
            args.get_arg_startDate()
,            args.get_arg_endDate()
        );
    }
};

#if ((defined STENCIL_USING_WEBSERVICE) and (STENCIL_USING_WEBSERVICE > 0))
template <> struct WebServiceHandlerTraits<Service::Search>
{
    static constexpr const std::string_view Url() { return std::string_view("Search"); }
};
#endif

template <> struct ReflectionBase::TypeTraits<Service::Store_Upload_Args&>
{
    struct Traits_arg_file
    {
        using TOwner     = Service::Store_Upload_Args;
        using TFieldType = shared_string;

        static constexpr std::string_view    Name() { return "file"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_file; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_file; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "Upload"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::Store_Upload_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_file(), obj2.get_carg_file())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::Store_Upload_Args
                                                                 ,
                                                                 Traits_arg_file
                                                                 >;
};
template <> struct ReflectionBase::TypeTraits<Service::Store_Download_Args&>
{
    struct Traits_arg_content
    {
        using TOwner     = Service::Store_Download_Args;
        using TFieldType = long;

        static constexpr std::string_view    Name() { return "content"; }
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }
        static constexpr auto TPropertyGetter() { return &TOwner::get_arg_content; }
        static constexpr auto TPropertySetter() { return &TOwner::set_arg_content; }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "Download"; }
    static constexpr auto TAttributeValue(const std::string_view& key) { return ::ReflectionServices::EmptyAttributeValue(key); }

    using ThisType = Service::Store_Download_Args;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.get_carg_content(), obj2.get_carg_content())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::Store_Download_Args
                                                                 ,
                                                                 Traits_arg_content
                                                                 >;
};
template <> struct ReflectionBase::InterfaceTraits<Service::Store>
{
    struct ApiTraits_Upload
    {
        using TOwner = Service::Store;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "Upload"; }
        static constexpr bool                Static = false;
    };
    struct ApiTraits_Download
    {
        using TOwner = Service::Store;
        static const ::ReflectionBase::Flags Flags() { return {}; }
        static constexpr std::string_view    Name() { return "Download"; }
        static constexpr bool                Static = false;
    };
    using Apis = ::ReflectionBase::InterfaceApiPack<
        ApiTraits_Upload
,        ApiTraits_Download
        >;
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::Store>::ApiTraits_Upload>
{
    using ArgsStruct = Service::Store_Upload_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "Upload"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->Upload(
            args.get_arg_file()
        );
    }
};

template <>
struct ReflectionBase::InterfaceApiTraits<ReflectionBase::InterfaceTraits<Service::Store>::ApiTraits_Download>
{
    using ArgsStruct = Service::Store_Download_Args;
    static constexpr bool             IsStatic() { return false; }
    static constexpr std::string_view Name() { return "Download"; }

    static auto Invoke(ArgsStruct& args)
    {
        return args.instance->Download(
            args.get_arg_content()
        );
    }
};

#if ((defined STENCIL_USING_WEBSERVICE) and (STENCIL_USING_WEBSERVICE > 0))
template <> struct WebServiceHandlerTraits<Service::Store>
{
    static constexpr const std::string_view Url() { return std::string_view("Store"); }
};
#endif

template <> struct ReflectionBase::TypeTraits<Service::MapPoint::Data&>
{
    struct Traits_latitude
    {
        using TOwner     = Service::MapPoint::Data;
        using TFieldType = int64_t;

        static constexpr std::string_view Name() { return "latitude"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_latitude; }
        static constexpr auto TPropertySetter() { return &TOwner::set_latitude; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::latitude, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_longitude
    {
        using TOwner     = Service::MapPoint::Data;
        using TFieldType = int64_t;

        static constexpr std::string_view Name() { return "longitude"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_longitude; }
        static constexpr auto TPropertySetter() { return &TOwner::set_longitude; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::longitude, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "MapPoint"; }
    static constexpr std::string_view           AttributeValue(const std::string_view& key)
    {
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    using ThisType = Service::MapPoint::Data;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.latitude(), obj2.latitude())
               && ReflectionBase::AreEqual(obj1.longitude(), obj2.longitude())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::MapPoint::Data,
                                                                 Traits_latitude
,                                                                 Traits_longitude
                                                                 >;
};

template <>
struct Stencil::Transaction<Service::MapPoint::Data> : Stencil::TransactionT<Service::MapPoint::Data>
{
    using TData = Service::MapPoint::Data;

    Transaction<int64_t> _subtracker_latitude;
    Transaction<int64_t> _subtracker_longitude;
    DELETE_COPY_AND_MOVE(Transaction);

    Transaction(TData& ptr, TransactionRecorder& rec) :
        Stencil::TransactionT<Service::MapPoint::Data>(ptr, rec)
        ,
        _subtracker_latitude(Obj().latitude(), rec)
        ,
        _subtracker_longitude(Obj().longitude(), rec)
    {
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::latitude: lambda(_subtracker_latitude); return;
        case TData::FieldIndex::longitude: lambda(_subtracker_longitude); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda)
    {
        switch (index)
        {
        case TData::FieldIndex::latitude: lambda(_subtracker_latitude); return;
        case TData::FieldIndex::longitude: lambda(_subtracker_longitude); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    void set_latitude(int64_t&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::latitude, Obj().latitude(), val);
        Obj().set_latitude(std::move(val));
    }

    void set_longitude(int64_t&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::longitude, Obj().longitude(), val);
        Obj().set_longitude(std::move(val));
    }

};

template <>
struct Stencil::Visitor<Service::MapPoint::Data, void> : Stencil::VisitorT<Service::MapPoint::Data>
{
    using TData = Service::MapPoint::Data;

    Visitor(TData& obj) : VisitorT<TData>(obj), _ref(obj) {}

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda)
    {
        switch (index)
        {
        case TData::FieldIndex::latitude: lambda("latitude", _ref.get().latitude()); return;
        case TData::FieldIndex::longitude: lambda("longitude", _ref.get().longitude()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::latitude: lambda("latitude", _ref.get().latitude()); return;
        case TData::FieldIndex::longitude: lambda("longitude", _ref.get().longitude()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void VisitAll(TLambda&& lambda) const
    {
        lambda("latitude", _ref.get().latitude());
        lambda("longitude", _ref.get().longitude());
    }

    std::reference_wrapper<TData> _ref;
};

template <>
struct Stencil::Visitor<const Service::MapPoint::Data, void> : Stencil::VisitorT<const Service::MapPoint::Data>
{
    using TData = Service::MapPoint::Data const;

    Visitor(TData& obj) : VisitorT<TData>(obj), _ref(obj) {}

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::latitude: lambda("latitude", _ref.get().latitude()); return;
        case TData::FieldIndex::longitude: lambda("longitude", _ref.get().longitude()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void VisitAll(TLambda&& lambda) const
    {
        lambda("latitude", _ref.get().latitude());
        lambda("longitude", _ref.get().longitude());
    }

    std::reference_wrapper<TData> _ref;
};

template <> struct ReflectionBase::TypeTraits<Service::GeographicalArea::Data&>
{
    struct Traits_type
    {
        using TOwner     = Service::GeographicalArea::Data;
        using TFieldType = shared_string;

        static constexpr std::string_view Name() { return "type"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_type; }
        static constexpr auto TPropertySetter() { return &TOwner::set_type; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::type, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_name
    {
        using TOwner     = Service::GeographicalArea::Data;
        using TFieldType = shared_string;

        static constexpr std::string_view Name() { return "name"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_name; }
        static constexpr auto TPropertySetter() { return &TOwner::set_name; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::name, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_areaPolygon
    {
        using TOwner     = Service::GeographicalArea::Data;
        using TFieldType = std::vector<::Service::MapPoint::Data>;

        static constexpr std::string_view Name() { return "areaPolygon"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_areaPolygon; }
        static constexpr auto TPropertySetter() { return &TOwner::set_areaPolygon; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::areaPolygon, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "GeographicalArea"; }
    static constexpr std::string_view           AttributeValue(const std::string_view& key)
    {
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    using ThisType = Service::GeographicalArea::Data;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.type(), obj2.type())
               && ReflectionBase::AreEqual(obj1.name(), obj2.name())
               && ReflectionBase::AreEqual(obj1.areaPolygon(), obj2.areaPolygon())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::GeographicalArea::Data,
                                                                 Traits_type
,                                                                 Traits_name
,                                                                 Traits_areaPolygon
                                                                 >;
};

template <>
struct Stencil::Transaction<Service::GeographicalArea::Data> : Stencil::TransactionT<Service::GeographicalArea::Data>
{
    using TData = Service::GeographicalArea::Data;

    Transaction<shared_string> _subtracker_type;
    Transaction<shared_string> _subtracker_name;
    Transaction<std::vector<::Service::MapPoint::Data>> _subtracker_areaPolygon;
    DELETE_COPY_AND_MOVE(Transaction);

    Transaction(TData& ptr, TransactionRecorder& rec) :
        Stencil::TransactionT<Service::GeographicalArea::Data>(ptr, rec)
        ,
        _subtracker_type(Obj().type(), rec)
        ,
        _subtracker_name(Obj().name(), rec)
        ,
        _subtracker_areaPolygon(Obj().areaPolygon(), rec)
    {
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::type: lambda(_subtracker_type); return;
        case TData::FieldIndex::name: lambda(_subtracker_name); return;
        case TData::FieldIndex::areaPolygon: lambda(_subtracker_areaPolygon); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda)
    {
        switch (index)
        {
        case TData::FieldIndex::type: lambda(_subtracker_type); return;
        case TData::FieldIndex::name: lambda(_subtracker_name); return;
        case TData::FieldIndex::areaPolygon: lambda(_subtracker_areaPolygon); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    void set_type(shared_string&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::type, Obj().type(), val);
        Obj().set_type(std::move(val));
    }

    void set_name(shared_string&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::name, Obj().name(), val);
        Obj().set_name(std::move(val));
    }

    void set_areaPolygon(std::vector<::Service::MapPoint::Data>&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::areaPolygon, Obj().areaPolygon(), val);
        Obj().set_areaPolygon(std::move(val));
    }

};

template <>
struct Stencil::Visitor<Service::GeographicalArea::Data, void> : Stencil::VisitorT<Service::GeographicalArea::Data>
{
    using TData = Service::GeographicalArea::Data;

    Visitor(TData& obj) : VisitorT<TData>(obj), _ref(obj) {}

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda)
    {
        switch (index)
        {
        case TData::FieldIndex::type: lambda("type", _ref.get().type()); return;
        case TData::FieldIndex::name: lambda("name", _ref.get().name()); return;
        case TData::FieldIndex::areaPolygon: lambda("areaPolygon", _ref.get().areaPolygon()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::type: lambda("type", _ref.get().type()); return;
        case TData::FieldIndex::name: lambda("name", _ref.get().name()); return;
        case TData::FieldIndex::areaPolygon: lambda("areaPolygon", _ref.get().areaPolygon()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void VisitAll(TLambda&& lambda) const
    {
        lambda("type", _ref.get().type());
        lambda("name", _ref.get().name());
        lambda("areaPolygon", _ref.get().areaPolygon());
    }

    std::reference_wrapper<TData> _ref;
};

template <>
struct Stencil::Visitor<const Service::GeographicalArea::Data, void> : Stencil::VisitorT<const Service::GeographicalArea::Data>
{
    using TData = Service::GeographicalArea::Data const;

    Visitor(TData& obj) : VisitorT<TData>(obj), _ref(obj) {}

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::type: lambda("type", _ref.get().type()); return;
        case TData::FieldIndex::name: lambda("name", _ref.get().name()); return;
        case TData::FieldIndex::areaPolygon: lambda("areaPolygon", _ref.get().areaPolygon()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void VisitAll(TLambda&& lambda) const
    {
        lambda("type", _ref.get().type());
        lambda("name", _ref.get().name());
        lambda("areaPolygon", _ref.get().areaPolygon());
    }

    std::reference_wrapper<TData> _ref;
};

template <> struct ReflectionBase::TypeTraits<Service::DigitalAssetInfo::Data&>
{
    struct Traits_id
    {
        using TOwner     = Service::DigitalAssetInfo::Data;
        using TFieldType = int32_t;

        static constexpr std::string_view Name() { return "id"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_id; }
        static constexpr auto TPropertySetter() { return &TOwner::set_id; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::id, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_keywords
    {
        using TOwner     = Service::DigitalAssetInfo::Data;
        using TFieldType = std::vector<shared_tree<shared_string>>;

        static constexpr std::string_view Name() { return "keywords"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_keywords; }
        static constexpr auto TPropertySetter() { return &TOwner::set_keywords; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::keywords, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_location
    {
        using TOwner     = Service::DigitalAssetInfo::Data;
        using TFieldType = shared_tree<::Service::GeographicalArea::Data>;

        static constexpr std::string_view Name() { return "location"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_location; }
        static constexpr auto TPropertySetter() { return &TOwner::set_location; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::location, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_md5sum
    {
        using TOwner     = Service::DigitalAssetInfo::Data;
        using TFieldType = int64_t;

        static constexpr std::string_view Name() { return "md5sum"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_md5sum; }
        static constexpr auto TPropertySetter() { return &TOwner::set_md5sum; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::md5sum, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_thumbnailBlob
    {
        using TOwner     = Service::DigitalAssetInfo::Data;
        using TFieldType = shared_string;

        static constexpr std::string_view Name() { return "thumbnailBlob"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_thumbnailBlob; }
        static constexpr auto TPropertySetter() { return &TOwner::set_thumbnailBlob; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::thumbnailBlob, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    struct Traits_fileUrl
    {
        using TOwner     = Service::DigitalAssetInfo::Data;
        using TFieldType = shared_string;

        static constexpr std::string_view Name() { return "fileUrl"; }

        static constexpr auto TPropertyGetter() { return &TOwner::get_fileUrl; }
        static constexpr auto TPropertySetter() { return &TOwner::set_fileUrl; }
        static constexpr auto TAttributeValue(const std::string_view& key)
        {
            return TOwner::FieldAttributeValue(TOwner::FieldIndex::fileUrl, key);
        }

        static const ::ReflectionBase::Flags Flags()
        {
            return ::ReflectionBase::Flags{                                           ::ReflectionBase::Flag::Max};
        }
    };
    static constexpr ::ReflectionBase::DataType Type() { return ::ReflectionBase::DataType::Object; }
    static constexpr std::string_view           Name() { return "DigitalAssetInfo"; }
    static constexpr std::string_view           AttributeValue(const std::string_view& key)
    {
        return ::ReflectionServices::EmptyAttributeValue(key);
    }

    using ThisType = Service::DigitalAssetInfo::Data;
    static bool AreEqual([[maybe_unused]] ThisType const& obj1, [[maybe_unused]] ThisType const& obj2)
    {
        return true
               && ReflectionBase::AreEqual(obj1.id(), obj2.id())
               && ReflectionBase::AreEqual(obj1.keywords(), obj2.keywords())
               && ReflectionBase::AreEqual(obj1.location(), obj2.location())
               && ReflectionBase::AreEqual(obj1.md5sum(), obj2.md5sum())
               && ReflectionBase::AreEqual(obj1.thumbnailBlob(), obj2.thumbnailBlob())
               && ReflectionBase::AreEqual(obj1.fileUrl(), obj2.fileUrl())
            ;
    }

    using Handler = ::ReflectionServices::ReflectedStructHandler<Service::DigitalAssetInfo::Data,
                                                                 Traits_id
,                                                                 Traits_keywords
,                                                                 Traits_location
,                                                                 Traits_md5sum
,                                                                 Traits_thumbnailBlob
,                                                                 Traits_fileUrl
                                                                 >;
};

template <>
struct Stencil::Transaction<Service::DigitalAssetInfo::Data> : Stencil::TransactionT<Service::DigitalAssetInfo::Data>
{
    using TData = Service::DigitalAssetInfo::Data;

    Transaction<int32_t> _subtracker_id;
    Transaction<std::vector<shared_tree<shared_string>>> _subtracker_keywords;
    Transaction<shared_tree<::Service::GeographicalArea::Data>> _subtracker_location;
    Transaction<int64_t> _subtracker_md5sum;
    Transaction<shared_string> _subtracker_thumbnailBlob;
    Transaction<shared_string> _subtracker_fileUrl;
    DELETE_COPY_AND_MOVE(Transaction);

    Transaction(TData& ptr, TransactionRecorder& rec) :
        Stencil::TransactionT<Service::DigitalAssetInfo::Data>(ptr, rec)
        ,
        _subtracker_id(Obj().id(), rec)
        ,
        _subtracker_keywords(Obj().keywords(), rec)
        ,
        _subtracker_location(Obj().location(), rec)
        ,
        _subtracker_md5sum(Obj().md5sum(), rec)
        ,
        _subtracker_thumbnailBlob(Obj().thumbnailBlob(), rec)
        ,
        _subtracker_fileUrl(Obj().fileUrl(), rec)
    {
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::id: lambda(_subtracker_id); return;
        case TData::FieldIndex::keywords: lambda(_subtracker_keywords); return;
        case TData::FieldIndex::location: lambda(_subtracker_location); return;
        case TData::FieldIndex::md5sum: lambda(_subtracker_md5sum); return;
        case TData::FieldIndex::thumbnailBlob: lambda(_subtracker_thumbnailBlob); return;
        case TData::FieldIndex::fileUrl: lambda(_subtracker_fileUrl); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda)
    {
        switch (index)
        {
        case TData::FieldIndex::id: lambda(_subtracker_id); return;
        case TData::FieldIndex::keywords: lambda(_subtracker_keywords); return;
        case TData::FieldIndex::location: lambda(_subtracker_location); return;
        case TData::FieldIndex::md5sum: lambda(_subtracker_md5sum); return;
        case TData::FieldIndex::thumbnailBlob: lambda(_subtracker_thumbnailBlob); return;
        case TData::FieldIndex::fileUrl: lambda(_subtracker_fileUrl); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    void set_id(int32_t&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::id, Obj().id(), val);
        Obj().set_id(std::move(val));
    }

    void set_keywords(std::vector<shared_tree<shared_string>>&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::keywords, Obj().keywords(), val);
        Obj().set_keywords(std::move(val));
    }

    void set_location(shared_tree<::Service::GeographicalArea::Data>&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::location, Obj().location(), val);
        Obj().set_location(std::move(val));
    }

    void set_md5sum(int64_t&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::md5sum, Obj().md5sum(), val);
        Obj().set_md5sum(std::move(val));
    }

    void set_thumbnailBlob(shared_string&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::thumbnailBlob, Obj().thumbnailBlob(), val);
        Obj().set_thumbnailBlob(std::move(val));
    }

    void set_fileUrl(shared_string&& val)
    {
        OnStructFieldChangeRequested(TData::FieldIndex::fileUrl, Obj().fileUrl(), val);
        Obj().set_fileUrl(std::move(val));
    }

};

template <>
struct Stencil::Visitor<Service::DigitalAssetInfo::Data, void> : Stencil::VisitorT<Service::DigitalAssetInfo::Data>
{
    using TData = Service::DigitalAssetInfo::Data;

    Visitor(TData& obj) : VisitorT<TData>(obj), _ref(obj) {}

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda)
    {
        switch (index)
        {
        case TData::FieldIndex::id: lambda("id", _ref.get().id()); return;
        case TData::FieldIndex::keywords: lambda("keywords", _ref.get().keywords()); return;
        case TData::FieldIndex::location: lambda("location", _ref.get().location()); return;
        case TData::FieldIndex::md5sum: lambda("md5sum", _ref.get().md5sum()); return;
        case TData::FieldIndex::thumbnailBlob: lambda("thumbnailBlob", _ref.get().thumbnailBlob()); return;
        case TData::FieldIndex::fileUrl: lambda("fileUrl", _ref.get().fileUrl()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::id: lambda("id", _ref.get().id()); return;
        case TData::FieldIndex::keywords: lambda("keywords", _ref.get().keywords()); return;
        case TData::FieldIndex::location: lambda("location", _ref.get().location()); return;
        case TData::FieldIndex::md5sum: lambda("md5sum", _ref.get().md5sum()); return;
        case TData::FieldIndex::thumbnailBlob: lambda("thumbnailBlob", _ref.get().thumbnailBlob()); return;
        case TData::FieldIndex::fileUrl: lambda("fileUrl", _ref.get().fileUrl()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void VisitAll(TLambda&& lambda) const
    {
        lambda("id", _ref.get().id());
        lambda("keywords", _ref.get().keywords());
        lambda("location", _ref.get().location());
        lambda("md5sum", _ref.get().md5sum());
        lambda("thumbnailBlob", _ref.get().thumbnailBlob());
        lambda("fileUrl", _ref.get().fileUrl());
    }

    std::reference_wrapper<TData> _ref;
};

template <>
struct Stencil::Visitor<const Service::DigitalAssetInfo::Data, void> : Stencil::VisitorT<const Service::DigitalAssetInfo::Data>
{
    using TData = Service::DigitalAssetInfo::Data const;

    Visitor(TData& obj) : VisitorT<TData>(obj), _ref(obj) {}

    template <typename TLambda> void Visit(typename TData::FieldIndex index, TLambda&& lambda) const
    {
        switch (index)
        {
        case TData::FieldIndex::id: lambda("id", _ref.get().id()); return;
        case TData::FieldIndex::keywords: lambda("keywords", _ref.get().keywords()); return;
        case TData::FieldIndex::location: lambda("location", _ref.get().location()); return;
        case TData::FieldIndex::md5sum: lambda("md5sum", _ref.get().md5sum()); return;
        case TData::FieldIndex::thumbnailBlob: lambda("thumbnailBlob", _ref.get().thumbnailBlob()); return;
        case TData::FieldIndex::fileUrl: lambda("fileUrl", _ref.get().fileUrl()); return;
        case TData::FieldIndex::Invalid: throw std::invalid_argument("Asked to visit invalid field");
        }
    }

    template <typename TLambda> void VisitAll(TLambda&& lambda) const
    {
        lambda("id", _ref.get().id());
        lambda("keywords", _ref.get().keywords());
        lambda("location", _ref.get().location());
        lambda("md5sum", _ref.get().md5sum());
        lambda("thumbnailBlob", _ref.get().thumbnailBlob());
        lambda("fileUrl", _ref.get().fileUrl());
    }

    std::reference_wrapper<TData> _ref;
};

#endif
// SECTION END: Template specializations

// SECTION START: Inline Function Definitions
#if true

#endif
// SECTION END: Inline Function Definitions
