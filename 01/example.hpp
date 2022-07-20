

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef example_1944008529_hpp
#define example_1944008529_hpp

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

namespace acme {

    class NDDSUSERDllExport Point {
      public:
        Point();

        Point(
            double x,
            double y,
            double z);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        Point (Point&&) = default;
        Point& operator=(Point&&) = default;
        Point& operator=(const Point&) = default;
        Point(const Point&) = default;
        #else
        Point(Point&& other_) OMG_NOEXCEPT;  
        Point& operator=(Point&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double& x() OMG_NOEXCEPT {
            return m_x_;
        }

        const double& x() const OMG_NOEXCEPT {
            return m_x_;
        }

        void x(double value) {
            m_x_ = value;
        }

        double& y() OMG_NOEXCEPT {
            return m_y_;
        }

        const double& y() const OMG_NOEXCEPT {
            return m_y_;
        }

        void y(double value) {
            m_y_ = value;
        }

        double& z() OMG_NOEXCEPT {
            return m_z_;
        }

        const double& z() const OMG_NOEXCEPT {
            return m_z_;
        }

        void z(double value) {
            m_z_ = value;
        }

        bool operator == (const Point& other_) const;
        bool operator != (const Point& other_) const;

        void swap(Point& other_) OMG_NOEXCEPT ;

      private:

        double m_x_;
        double m_y_;
        double m_z_;

    };

    inline void swap(Point& a, Point& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Point& sample);

    class NDDSUSERDllExport Quaternion {
      public:
        Quaternion();

        Quaternion(
            double x,
            double y,
            double z,
            double w);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        Quaternion (Quaternion&&) = default;
        Quaternion& operator=(Quaternion&&) = default;
        Quaternion& operator=(const Quaternion&) = default;
        Quaternion(const Quaternion&) = default;
        #else
        Quaternion(Quaternion&& other_) OMG_NOEXCEPT;  
        Quaternion& operator=(Quaternion&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        double& x() OMG_NOEXCEPT {
            return m_x_;
        }

        const double& x() const OMG_NOEXCEPT {
            return m_x_;
        }

        void x(double value) {
            m_x_ = value;
        }

        double& y() OMG_NOEXCEPT {
            return m_y_;
        }

        const double& y() const OMG_NOEXCEPT {
            return m_y_;
        }

        void y(double value) {
            m_y_ = value;
        }

        double& z() OMG_NOEXCEPT {
            return m_z_;
        }

        const double& z() const OMG_NOEXCEPT {
            return m_z_;
        }

        void z(double value) {
            m_z_ = value;
        }

        double& w() OMG_NOEXCEPT {
            return m_w_;
        }

        const double& w() const OMG_NOEXCEPT {
            return m_w_;
        }

        void w(double value) {
            m_w_ = value;
        }

        bool operator == (const Quaternion& other_) const;
        bool operator != (const Quaternion& other_) const;

        void swap(Quaternion& other_) OMG_NOEXCEPT ;

      private:

        double m_x_;
        double m_y_;
        double m_z_;
        double m_w_;

    };

    inline void swap(Quaternion& a, Quaternion& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Quaternion& sample);

    class NDDSUSERDllExport Pose {
      public:
        Pose();

        Pose(
            int32_t obj_id,
            const acme::Point& position,
            const acme::Quaternion& orientation);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        Pose (Pose&&) = default;
        Pose& operator=(Pose&&) = default;
        Pose& operator=(const Pose&) = default;
        Pose(const Pose&) = default;
        #else
        Pose(Pose&& other_) OMG_NOEXCEPT;  
        Pose& operator=(Pose&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        int32_t& obj_id() OMG_NOEXCEPT {
            return m_obj_id_;
        }

        const int32_t& obj_id() const OMG_NOEXCEPT {
            return m_obj_id_;
        }

        void obj_id(int32_t value) {
            m_obj_id_ = value;
        }

        acme::Point& position() OMG_NOEXCEPT {
            return m_position_;
        }

        const acme::Point& position() const OMG_NOEXCEPT {
            return m_position_;
        }

        void position(const acme::Point& value) {
            m_position_ = value;
        }

        void position(acme::Point&& value) {
            m_position_ = std::move(value);
        }
        acme::Quaternion& orientation() OMG_NOEXCEPT {
            return m_orientation_;
        }

        const acme::Quaternion& orientation() const OMG_NOEXCEPT {
            return m_orientation_;
        }

        void orientation(const acme::Quaternion& value) {
            m_orientation_ = value;
        }

        void orientation(acme::Quaternion&& value) {
            m_orientation_ = std::move(value);
        }

        bool operator == (const Pose& other_) const;
        bool operator != (const Pose& other_) const;

        void swap(Pose& other_) OMG_NOEXCEPT ;

      private:

        int32_t m_obj_id_;
        acme::Point m_position_;
        acme::Quaternion m_orientation_;

    };

    inline void swap(Pose& a, Pose& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Pose& sample);

} // namespace acme  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< acme::Point > {
            NDDSUSERDllExport static std::string value() {
                return "acme::Point";
            }
        };

        template<>
        struct topic_type_support< acme::Point > {
            NDDSUSERDllExport 
            static void reset_sample(acme::Point& sample);

            NDDSUSERDllExport 
            static void allocate_sample(acme::Point& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< acme::Quaternion > {
            NDDSUSERDllExport static std::string value() {
                return "acme::Quaternion";
            }
        };

        template<>
        struct topic_type_support< acme::Quaternion > {
            NDDSUSERDllExport 
            static void reset_sample(acme::Quaternion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(acme::Quaternion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< acme::Pose > {
            NDDSUSERDllExport static std::string value() {
                return "acme::Pose";
            }
        };

        template<>
        struct is_topic_type< acme::Pose > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< acme::Pose > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const acme::Pose& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(acme::Pose& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(acme::Pose& sample);

            NDDSUSERDllExport 
            static void allocate_sample(acme::Pose& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< acme::Point > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< acme::Point > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< acme::Quaternion > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< acme::Quaternion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< acme::Pose > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< acme::Pose > {
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

#endif // example_1944008529_hpp

