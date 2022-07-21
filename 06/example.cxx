

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "example.hpp"
#include "examplePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace acme {

    // ---- Point: 

    Point::Point() :
        m_x_ (0.0) ,
        m_y_ (0.0) ,
        m_z_ (0.0)  {
    }   

    Point::Point (
        double x,
        double y,
        double z)
        :
            m_x_( x ),
            m_y_( y ),
            m_z_( z ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Point::Point(Point&& other_) OMG_NOEXCEPT  :m_x_ (std::move(other_.m_x_))
    ,
    m_y_ (std::move(other_.m_y_))
    ,
    m_z_ (std::move(other_.m_z_))
    {
    } 

    Point& Point::operator=(Point&&  other_) OMG_NOEXCEPT {
        Point tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void Point::swap(Point& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_x_, other_.m_x_);
        swap(m_y_, other_.m_y_);
        swap(m_z_, other_.m_z_);
    }  

    bool Point::operator == (const Point& other_) const {
        if (m_x_ != other_.m_x_) {
            return false;
        }
        if (m_y_ != other_.m_y_) {
            return false;
        }
        if (m_z_ != other_.m_z_) {
            return false;
        }
        return true;
    }
    bool Point::operator != (const Point& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const Point& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "x: " << std::setprecision(15) <<sample.x()<<", ";
        o << "y: " << std::setprecision(15) <<sample.y()<<", ";
        o << "z: " << std::setprecision(15) <<sample.z() ;
        o <<"]";
        return o;
    }

    // ---- Quaternion: 

    Quaternion::Quaternion() :
        m_x_ (0.0) ,
        m_y_ (0.0) ,
        m_z_ (0.0) ,
        m_w_ (0.0)  {
    }   

    Quaternion::Quaternion (
        double x,
        double y,
        double z,
        double w)
        :
            m_x_( x ),
            m_y_( y ),
            m_z_( z ),
            m_w_( w ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Quaternion::Quaternion(Quaternion&& other_) OMG_NOEXCEPT  :m_x_ (std::move(other_.m_x_))
    ,
    m_y_ (std::move(other_.m_y_))
    ,
    m_z_ (std::move(other_.m_z_))
    ,
    m_w_ (std::move(other_.m_w_))
    {
    } 

    Quaternion& Quaternion::operator=(Quaternion&&  other_) OMG_NOEXCEPT {
        Quaternion tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void Quaternion::swap(Quaternion& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_x_, other_.m_x_);
        swap(m_y_, other_.m_y_);
        swap(m_z_, other_.m_z_);
        swap(m_w_, other_.m_w_);
    }  

    bool Quaternion::operator == (const Quaternion& other_) const {
        if (m_x_ != other_.m_x_) {
            return false;
        }
        if (m_y_ != other_.m_y_) {
            return false;
        }
        if (m_z_ != other_.m_z_) {
            return false;
        }
        if (m_w_ != other_.m_w_) {
            return false;
        }
        return true;
    }
    bool Quaternion::operator != (const Quaternion& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const Quaternion& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "x: " << std::setprecision(15) <<sample.x()<<", ";
        o << "y: " << std::setprecision(15) <<sample.y()<<", ";
        o << "z: " << std::setprecision(15) <<sample.z()<<", ";
        o << "w: " << std::setprecision(15) <<sample.w() ;
        o <<"]";
        return o;
    }

    // ---- Pose: 

    Pose::Pose() :
        m_obj_id_ (0)  {
    }   

    Pose::Pose (
        int32_t obj_id,
        const acme::Point& position,
        const acme::Quaternion& orientation)
        :
            m_obj_id_( obj_id ),
            m_position_( position ),
            m_orientation_( orientation ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Pose::Pose(Pose&& other_) OMG_NOEXCEPT  :m_obj_id_ (std::move(other_.m_obj_id_))
    ,
    m_position_ (std::move(other_.m_position_))
    ,
    m_orientation_ (std::move(other_.m_orientation_))
    {
    } 

    Pose& Pose::operator=(Pose&&  other_) OMG_NOEXCEPT {
        Pose tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void Pose::swap(Pose& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_obj_id_, other_.m_obj_id_);
        swap(m_position_, other_.m_position_);
        swap(m_orientation_, other_.m_orientation_);
    }  

    bool Pose::operator == (const Pose& other_) const {
        if (m_obj_id_ != other_.m_obj_id_) {
            return false;
        }
        if (m_position_ != other_.m_position_) {
            return false;
        }
        if (m_orientation_ != other_.m_orientation_) {
            return false;
        }
        return true;
    }
    bool Pose::operator != (const Pose& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const Pose& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "obj_id: " << sample.obj_id()<<", ";
        o << "position: " << sample.position()<<", ";
        o << "orientation: " << sample.orientation() ;
        o <<"]";
        return o;
    }

} // namespace acme  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< acme::Point > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Point_g_tc_members[3]=
                {

                    {
                        (char *)"x",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"z",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Point_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"acme::Point", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Point_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Point*/

                if (is_initialized) {
                    return &Point_g_tc;
                }

                Point_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Point_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Point_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Point_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Point_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Point_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Point_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Point_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Point_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Point_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Point_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Point_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Point_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Point_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Point_g_tc._data._sampleAccessInfo = sample_access_info();
                Point_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Point_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                acme::Point *sample;

                static RTIXCdrMemberAccessInfo Point_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Point_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Point_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    acme::Point);
                if (sample == NULL) {
                    return NULL;
                }

                Point_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                Point_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                Point_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->z() - (char *)sample);

                Point_g_sampleAccessInfo.memberAccessInfos = 
                Point_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(acme::Point);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Point_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Point_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Point_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Point_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< acme::Point >;

                Point_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Point_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Point_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Point_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< acme::Point >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< acme::Point >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< acme::Quaternion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Quaternion_g_tc_members[4]=
                {

                    {
                        (char *)"x",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"z",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"w",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Quaternion_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"acme::Quaternion", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Quaternion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Quaternion*/

                if (is_initialized) {
                    return &Quaternion_g_tc;
                }

                Quaternion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Quaternion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Quaternion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Quaternion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                Quaternion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                Quaternion_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                Quaternion_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Quaternion_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Quaternion_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Quaternion_g_tc._data._sampleAccessInfo = sample_access_info();
                Quaternion_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Quaternion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                acme::Quaternion *sample;

                static RTIXCdrMemberAccessInfo Quaternion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Quaternion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Quaternion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    acme::Quaternion);
                if (sample == NULL) {
                    return NULL;
                }

                Quaternion_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                Quaternion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                Quaternion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->z() - (char *)sample);

                Quaternion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->w() - (char *)sample);

                Quaternion_g_sampleAccessInfo.memberAccessInfos = 
                Quaternion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(acme::Quaternion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Quaternion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Quaternion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Quaternion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Quaternion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< acme::Quaternion >;

                Quaternion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Quaternion_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Quaternion_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Quaternion_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< acme::Quaternion >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< acme::Quaternion >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< acme::Pose > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Pose_g_tc_members[3]=
                {

                    {
                        (char *)"obj_id",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"position",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"orientation",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Pose_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"acme::Pose", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Pose_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Pose*/

                if (is_initialized) {
                    return &Pose_g_tc;
                }

                Pose_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Pose_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                Pose_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< acme::Point>::get().native();
                Pose_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< acme::Quaternion>::get().native();

                /* Initialize the values for member annotations. */
                Pose_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Pose_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                Pose_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Pose_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Pose_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Pose_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Pose_g_tc._data._sampleAccessInfo = sample_access_info();
                Pose_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Pose_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                acme::Pose *sample;

                static RTIXCdrMemberAccessInfo Pose_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Pose_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Pose_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    acme::Pose);
                if (sample == NULL) {
                    return NULL;
                }

                Pose_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->obj_id() - (char *)sample);

                Pose_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                Pose_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->orientation() - (char *)sample);

                Pose_g_sampleAccessInfo.memberAccessInfos = 
                Pose_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(acme::Pose);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Pose_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Pose_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Pose_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Pose_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< acme::Pose >;

                Pose_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Pose_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Pose_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Pose_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< acme::Pose >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< acme::Pose >::get())));
        }

    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< acme::Point >::reset_sample(acme::Point& sample) 
        {
            sample.x(0.0);
            sample.y(0.0);
            sample.z(0.0);
        }

        void topic_type_support< acme::Point >::allocate_sample(acme::Point& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< acme::Quaternion >::reset_sample(acme::Quaternion& sample) 
        {
            sample.x(0.0);
            sample.y(0.0);
            sample.z(0.0);
            sample.w(0.0);
        }

        void topic_type_support< acme::Quaternion >::allocate_sample(acme::Quaternion& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< acme::Pose >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                acme::PosePlugin_new,
                acme::PosePlugin_delete);
        }

        std::vector<char>& topic_type_support< acme::Pose >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const acme::Pose& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PosePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PosePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< acme::Pose >::from_cdr_buffer(acme::Pose& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PosePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create acme::Pose from cdr buffer");
        }

        void topic_type_support< acme::Pose >::reset_sample(acme::Pose& sample) 
        {
            sample.obj_id(0);
            ::rti::topic::reset_sample(sample.position());
            ::rti::topic::reset_sample(sample.orientation());
        }

        void topic_type_support< acme::Pose >::allocate_sample(acme::Pose& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
            ::rti::topic::allocate_sample(sample.orientation(),  -1, -1);
        }

    }
}  

