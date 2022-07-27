

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef example_1944008421_hpp
#define example_1944008421_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

static const std::string topic_name = "Async Pub Data Topic";

static const std::string qos_profile_name = "async_pub_Library::async_pub_profile";

class NDDSUSERDllExport LargeType {
  public:
    LargeType();

    LargeType(
        int32_t id,
        const ::dds::core::array< int32_t, 100000L>& values);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    LargeType (LargeType&&) = default;
    LargeType& operator=(LargeType&&) = default;
    LargeType& operator=(const LargeType&) = default;
    LargeType(const LargeType&) = default;
    #else
    LargeType(LargeType&& other_) OMG_NOEXCEPT;  
    LargeType& operator=(LargeType&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& id() OMG_NOEXCEPT {
        return m_id_;
    }

    const int32_t& id() const OMG_NOEXCEPT {
        return m_id_;
    }

    void id(int32_t value) {
        m_id_ = value;
    }

    ::dds::core::array< int32_t, 100000L>& values() OMG_NOEXCEPT {
        return m_values_;
    }

    const ::dds::core::array< int32_t, 100000L>& values() const OMG_NOEXCEPT {
        return m_values_;
    }

    void values(const ::dds::core::array< int32_t, 100000L>& value) {
        m_values_ = value;
    }

    void values(::dds::core::array< int32_t, 100000L>&& value) {
        m_values_ = std::move(value);
    }

    bool operator == (const LargeType& other_) const;
    bool operator != (const LargeType& other_) const;

    void swap(LargeType& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_id_;
    ::dds::core::array< int32_t, 100000L> m_values_;

};

inline void swap(LargeType& a, LargeType& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LargeType& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< LargeType > {
            NDDSUSERDllExport static std::string value() {
                return "LargeType";
            }
        };

        template<>
        struct is_topic_type< LargeType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< LargeType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const LargeType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(LargeType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(LargeType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(LargeType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< LargeType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< LargeType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // example_1944008421_hpp

