

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef example_1944008408_hpp
#define example_1944008408_hpp

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

static const std::string topic_name = "Batched Data Topic";

static const std::string qos_profile_name = "batching_Library::batching_profile";

class NDDSUSERDllExport SmallType {
  public:
    SmallType();

    SmallType(
        int32_t id,
        int32_t value);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SmallType (SmallType&&) = default;
    SmallType& operator=(SmallType&&) = default;
    SmallType& operator=(const SmallType&) = default;
    SmallType(const SmallType&) = default;
    #else
    SmallType(SmallType&& other_) OMG_NOEXCEPT;  
    SmallType& operator=(SmallType&&  other_) OMG_NOEXCEPT;
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

    int32_t& value() OMG_NOEXCEPT {
        return m_value_;
    }

    const int32_t& value() const OMG_NOEXCEPT {
        return m_value_;
    }

    void value(int32_t value) {
        m_value_ = value;
    }

    bool operator == (const SmallType& other_) const;
    bool operator != (const SmallType& other_) const;

    void swap(SmallType& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_id_;
    int32_t m_value_;

};

inline void swap(SmallType& a, SmallType& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SmallType& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< SmallType > {
            NDDSUSERDllExport static std::string value() {
                return "SmallType";
            }
        };

        template<>
        struct is_topic_type< SmallType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< SmallType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const SmallType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(SmallType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(SmallType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(SmallType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< SmallType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< SmallType > {
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

#endif // example_1944008408_hpp

