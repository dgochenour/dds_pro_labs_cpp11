

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

// ---- SmallType: 

SmallType::SmallType() :
    m_id_ (0) ,
    m_value_ (0)  {
}   

SmallType::SmallType (
    int32_t id,
    int32_t value)
    :
        m_id_( id ),
        m_value_( value ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
SmallType::SmallType(SmallType&& other_) OMG_NOEXCEPT  :m_id_ (std::move(other_.m_id_))
,
m_value_ (std::move(other_.m_value_))
{
} 

SmallType& SmallType::operator=(SmallType&&  other_) OMG_NOEXCEPT {
    SmallType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void SmallType::swap(SmallType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_id_, other_.m_id_);
    swap(m_value_, other_.m_value_);
}  

bool SmallType::operator == (const SmallType& other_) const {
    if (m_id_ != other_.m_id_) {
        return false;
    }
    if (m_value_ != other_.m_value_) {
        return false;
    }
    return true;
}
bool SmallType::operator != (const SmallType& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const SmallType& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "id: " << sample.id()<<", ";
    o << "value: " << sample.value() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< SmallType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SmallType_g_tc_members[2]=
                {

                    {
                        (char *)"id",/* Member name */
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
                        (char *)"value",/* Member name */
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
                    }
                };

                static DDS_TypeCode SmallType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"SmallType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SmallType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SmallType*/

                if (is_initialized) {
                    return &SmallType_g_tc;
                }

                SmallType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SmallType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                SmallType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                SmallType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SmallType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                SmallType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SmallType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                SmallType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SmallType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                SmallType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                SmallType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                SmallType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                SmallType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                SmallType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                SmallType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                SmallType_g_tc._data._sampleAccessInfo = sample_access_info();
                SmallType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SmallType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                SmallType *sample;

                static RTIXCdrMemberAccessInfo SmallType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SmallType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SmallType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    SmallType);
                if (sample == NULL) {
                    return NULL;
                }

                SmallType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->id() - (char *)sample);

                SmallType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value() - (char *)sample);

                SmallType_g_sampleAccessInfo.memberAccessInfos = 
                SmallType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(SmallType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SmallType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SmallType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SmallType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SmallType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< SmallType >;

                SmallType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SmallType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SmallType_g_typePlugin = 
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

                return &SmallType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< SmallType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< SmallType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< SmallType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                SmallTypePlugin_new,
                SmallTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< SmallType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const SmallType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SmallTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SmallTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< SmallType >::from_cdr_buffer(SmallType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SmallTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create SmallType from cdr buffer");
        }

        void topic_type_support< SmallType >::reset_sample(SmallType& sample) 
        {
            sample.id(0);
            sample.value(0);
        }

        void topic_type_support< SmallType >::allocate_sample(SmallType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

