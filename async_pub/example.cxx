

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

// ---- LargeType: 

LargeType::LargeType() :
    m_id_ (0)  {
        ::rti::core::fill_array< int32_t >( m_values_, 0);
}   

LargeType::LargeType (
    int32_t id,
    const ::dds::core::array< int32_t, 100000L>& values)
    :
        m_id_( id ),
        m_values_( values ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
LargeType::LargeType(LargeType&& other_) OMG_NOEXCEPT  :m_id_ (std::move(other_.m_id_))
,
m_values_ (std::move(other_.m_values_))
{
} 

LargeType& LargeType::operator=(LargeType&&  other_) OMG_NOEXCEPT {
    LargeType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void LargeType::swap(LargeType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_id_, other_.m_id_);
    swap(m_values_, other_.m_values_);
}  

bool LargeType::operator == (const LargeType& other_) const {
    if (m_id_ != other_.m_id_) {
        return false;
    }
    if (m_values_ != other_.m_values_) {
        return false;
    }
    return true;
}
bool LargeType::operator != (const LargeType& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const LargeType& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "id: " << sample.id()<<", ";
    o << "values: " << sample.values() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< LargeType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LargeType_g_tc_values_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,100000L, NULL,NULL);

                static DDS_TypeCode_Member LargeType_g_tc_members[2]=
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
                        (char *)"values",/* Member name */
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

                static DDS_TypeCode LargeType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"LargeType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LargeType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LargeType*/

                if (is_initialized) {
                    return &LargeType_g_tc;
                }

                LargeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LargeType_g_tc_values_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;
                LargeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                LargeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& LargeType_g_tc_values_array;

                /* Initialize the values for member annotations. */
                LargeType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                LargeType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                LargeType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                LargeType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                LargeType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                LargeType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                LargeType_g_tc._data._sampleAccessInfo = sample_access_info();
                LargeType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LargeType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                LargeType *sample;

                static RTIXCdrMemberAccessInfo LargeType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LargeType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LargeType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    LargeType);
                if (sample == NULL) {
                    return NULL;
                }

                LargeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->id() - (char *)sample);

                LargeType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->values() - (char *)sample);

                LargeType_g_sampleAccessInfo.memberAccessInfos = 
                LargeType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(LargeType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LargeType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LargeType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LargeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LargeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< LargeType >;

                LargeType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LargeType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LargeType_g_typePlugin = 
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

                return &LargeType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< LargeType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< LargeType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< LargeType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                LargeTypePlugin_new,
                LargeTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< LargeType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const LargeType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LargeTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LargeTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< LargeType >::from_cdr_buffer(LargeType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LargeTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create LargeType from cdr buffer");
        }

        void topic_type_support< LargeType >::reset_sample(LargeType& sample) 
        {
            sample.id(0);
            ::rti::topic::reset_sample(sample.values());
        }

        void topic_type_support< LargeType >::allocate_sample(LargeType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.values(),  -1, -1);
        }

    }
}  

