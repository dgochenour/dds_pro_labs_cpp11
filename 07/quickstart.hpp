

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from quickstart.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef quickstart_214727369_hpp
#define quickstart_214727369_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
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
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace qs {

    static const std::string topicName = "quickstart_topic";

    class NDDSUSERDllExport qs_type {

      public:
        qs_type();
        qs_type(
            int32_t id,
            int32_t value1,
            bool condition1,
            const std::string& name);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        qs_type (qs_type&&) = default;
        qs_type& operator=(qs_type&&) = default;
        qs_type& operator=(const qs_type&) = default;
        qs_type(const qs_type&) = default;
        #else
        qs_type(qs_type&& other_) OMG_NOEXCEPT;  
        qs_type& operator=(qs_type&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int32_t& id() OMG_NOEXCEPT; 
        const int32_t& id() const OMG_NOEXCEPT;
        void id(int32_t value);

        int32_t& value1() OMG_NOEXCEPT; 
        const int32_t& value1() const OMG_NOEXCEPT;
        void value1(int32_t value);

        bool& condition1() OMG_NOEXCEPT; 
        const bool& condition1() const OMG_NOEXCEPT;
        void condition1(bool value);

        std::string& name() OMG_NOEXCEPT; 
        const std::string& name() const OMG_NOEXCEPT;
        void name(const std::string& value);

        bool operator == (const qs_type& other_) const;
        bool operator != (const qs_type& other_) const;

        void swap(qs_type& other_) OMG_NOEXCEPT ;

      private:

        int32_t m_id_;
        int32_t m_value1_;
        bool m_condition1_;
        std::string m_name_;

    };

    inline void swap(qs_type& a, qs_type& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const qs_type& sample);

} // namespace qs  
namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<qs::qs_type> {
            NDDSUSERDllExport static std::string value() {
                return "qs::qs_type";
            }
        };

        template<>
        struct is_topic_type<qs::qs_type> : public dds::core::true_type {};

        template<>
        struct topic_type_support<qs::qs_type> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const qs::qs_type& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(qs::qs_type& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(qs::qs_type& sample);

            NDDSUSERDllExport 
            static void allocate_sample(qs::qs_type& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type<qs::qs_type> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<qs::qs_type> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // quickstart_214727369_hpp

