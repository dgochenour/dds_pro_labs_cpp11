

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "examplePlugin.hpp"

namespace acme {

    /* ----------------------------------------------------------------------------
    *  Type Point
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Point *
    PointPluginSupport_create_data(void)
    {
        try {
            Point *sample = new Point();
            ::rti::topic::allocate_sample(*sample);
            return sample;
        } catch (...) {
            return NULL;
        }
    }

    void 
    PointPluginSupport_destroy_data(
        Point *sample) 
    {
        delete sample;
    }

    RTIBool 
    PointPluginSupport_copy_data(
        Point *dst,
        const Point *src)
    {
        try {
            *dst = *src;
        } catch (...) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    PointPlugin_copy_sample(
        PRESTypePluginEndpointData,
        Point *dst,
        const Point *src)
    {
        return acme::PointPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    PointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    PointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Point *sample,
        ::dds::core::policy::DataRepresentationId representation)
    {
        using namespace ::dds::core::policy;

        try{
            RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

            if (length == NULL) {
                return RTI_FALSE;
            }

            RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
            epd.programContext = defaultProgramContext;
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Point >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            Point, 
            true, true, true>();

            encapsulationId = DDS_TypeCode_get_native_encapsulation(
                (DDS_TypeCode *) plugin.typeCode,
                representation);

            if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            PointPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd, 
                RTI_TRUE, 
                encapsulationId,
                0);

            if (buffer == NULL) {
                *length = 
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

                if (*length == 0) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }    

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, *length);

            result = PRESTypePlugin_interpretedSerialize(
                (PRESTypePluginEndpointData)&epd, 
                sample, 
                &stream, 
                RTI_TRUE, 
                encapsulationId,
                RTI_TRUE, 
                NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        } catch (...) {
            return RTI_FALSE;
        }
    }

    RTIBool
    PointPlugin_deserialize_from_cdr_buffer(
        Point *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;
        struct PRESTypePluginDefaultEndpointData epd;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Point >::get().native()
        ;
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        Point, 
        true, true, true>();

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        ::rti::topic::reset_sample(*sample);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream, 
            RTI_TRUE, 
            RTI_TRUE, 
            NULL);
    }

    unsigned int 
    PointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        try {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        } catch (...) {
            return 0;
        }    
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    PointPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool PointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Point **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= PRESTypePlugin_interpretedDeserializeKey( 
                endpoint_data, (sample != NULL)?*sample:NULL, stream,
                deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
            if (result) {
                if (stream->_xTypesState.unassignable) {
                    result = RTI_FALSE;
                }
            }
            return result;    
        } catch (...) {
            return RTI_FALSE;
        }     
    }

    unsigned int
    PointPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        try {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        } catch (...) {
            return RTI_FALSE;
        }    
    }

    unsigned int
    PointPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type Quaternion
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Quaternion *
    QuaternionPluginSupport_create_data(void)
    {
        try {
            Quaternion *sample = new Quaternion();
            ::rti::topic::allocate_sample(*sample);
            return sample;
        } catch (...) {
            return NULL;
        }
    }

    void 
    QuaternionPluginSupport_destroy_data(
        Quaternion *sample) 
    {
        delete sample;
    }

    RTIBool 
    QuaternionPluginSupport_copy_data(
        Quaternion *dst,
        const Quaternion *src)
    {
        try {
            *dst = *src;
        } catch (...) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    RTIBool 
    QuaternionPlugin_copy_sample(
        PRESTypePluginEndpointData,
        Quaternion *dst,
        const Quaternion *src)
    {
        return acme::QuaternionPluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    QuaternionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    QuaternionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Quaternion *sample,
        ::dds::core::policy::DataRepresentationId representation)
    {
        using namespace ::dds::core::policy;

        try{
            RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

            if (length == NULL) {
                return RTI_FALSE;
            }

            RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
            epd.programContext = defaultProgramContext;
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Quaternion >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            Quaternion, 
            true, true, true>();

            encapsulationId = DDS_TypeCode_get_native_encapsulation(
                (DDS_TypeCode *) plugin.typeCode,
                representation);

            if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            QuaternionPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd, 
                RTI_TRUE, 
                encapsulationId,
                0);

            if (buffer == NULL) {
                *length = 
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

                if (*length == 0) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }    

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, *length);

            result = PRESTypePlugin_interpretedSerialize(
                (PRESTypePluginEndpointData)&epd, 
                sample, 
                &stream, 
                RTI_TRUE, 
                encapsulationId,
                RTI_TRUE, 
                NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        } catch (...) {
            return RTI_FALSE;
        }
    }

    RTIBool
    QuaternionPlugin_deserialize_from_cdr_buffer(
        Quaternion *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;
        struct PRESTypePluginDefaultEndpointData epd;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Quaternion >::get().native()
        ;
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        Quaternion, 
        true, true, true>();

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        ::rti::topic::reset_sample(*sample);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream, 
            RTI_TRUE, 
            RTI_TRUE, 
            NULL);
    }

    unsigned int 
    QuaternionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        try {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        } catch (...) {
            return 0;
        }    
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    QuaternionPlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_NO_KEY;
    }

    RTIBool QuaternionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Quaternion **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= PRESTypePlugin_interpretedDeserializeKey( 
                endpoint_data, (sample != NULL)?*sample:NULL, stream,
                deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
            if (result) {
                if (stream->_xTypesState.unassignable) {
                    result = RTI_FALSE;
                }
            }
            return result;    
        } catch (...) {
            return RTI_FALSE;
        }     
    }

    unsigned int
    QuaternionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        try {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        } catch (...) {
            return RTI_FALSE;
        }    
    }

    unsigned int
    QuaternionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */

    /* ----------------------------------------------------------------------------
    *  Type Pose
    * -------------------------------------------------------------------------- */

    /* -----------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------- */

    Pose *
    PosePluginSupport_create_data(void)
    {
        try {
            Pose *sample = new Pose();
            ::rti::topic::allocate_sample(*sample);
            return sample;
        } catch (...) {
            return NULL;
        }
    }

    void 
    PosePluginSupport_destroy_data(
        Pose *sample) 
    {
        delete sample;
    }

    RTIBool 
    PosePluginSupport_copy_data(
        Pose *dst,
        const Pose *src)
    {
        try {
            *dst = *src;
        } catch (...) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }

    Pose *
    PosePluginSupport_create_key(void)
    {
        return PosePluginSupport_create_data();
    }

    void 
    PosePluginSupport_destroy_key(
        PoseKeyHolder *key) 
    {
        PosePluginSupport_destroy_data(key);
    }

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    PRESTypePluginParticipantData 
    PosePlugin_on_participant_attached(
        void *registration_data,
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration,
        void *container_plugin_context,
        RTICdrTypeCode *type_code)
    {
        struct RTIXCdrInterpreterPrograms *programs = NULL;
        struct PRESTypePluginDefaultParticipantData *pd = NULL;
        struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
        if (registration_data) {} /* To avoid warnings */
        if (participant_info) {} /* To avoid warnings */
        if (top_level_registration) {} /* To avoid warnings */
        if (container_plugin_context) {} /* To avoid warnings */
        if (type_code) {} /* To avoid warnings */
        pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

        programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
        programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
        programProperty.resolveAlias = RTI_XCDR_TRUE;
        programProperty.inlineStruct = RTI_XCDR_TRUE;
        programProperty.optimizeEnum = RTI_XCDR_TRUE;

        programProperty.externalReferenceSize = 
        (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
        programProperty.getExternalRefPointerFcn = 
        ::rti::topic::interpreter::get_external_value_pointer;

        programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
            DDS_TypeCodeFactory_get_instance(),
            (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Pose >::get().native()
            ,
            &programProperty,
            RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

        if (programs == NULL) {
            PRESTypePluginDefaultParticipantData_delete(
                (PRESTypePluginParticipantData)pd);
            return NULL;
        }

        pd->programs = programs;
        return (PRESTypePluginParticipantData)pd;
    }

    void 
    PosePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data)
    {
        if (participant_data != NULL) {
            struct PRESTypePluginDefaultParticipantData *pd = 
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

            if (pd->programs != NULL) {
                DDS_TypeCodeFactory_remove_programs_from_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    pd->programs);
                pd->programs = NULL;
            }
            PRESTypePluginDefaultParticipantData_delete(participant_data);
        }
    }

    PRESTypePluginEndpointData
    PosePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *containerPluginContext)
    {
        try {
            PRESTypePluginEndpointData epd = NULL;
            unsigned int serializedSampleMaxSize = 0;

            unsigned int serializedKeyMaxSize = 0;
            unsigned int serializedKeyMaxSizeV2 = 0;

            if (top_level_registration) {} /* To avoid warnings */
            if (containerPluginContext) {} /* To avoid warnings */

            if (participant_data == NULL) {
                return NULL;
            } 

            epd = PRESTypePluginDefaultEndpointData_new(
                participant_data,
                endpoint_info,
                (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                PosePluginSupport_create_data,
                (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                PosePluginSupport_destroy_data,
                (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                acme::PosePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                acme::PosePluginSupport_destroy_key);

            if (epd == NULL) {
                return NULL;
            } 

            serializedKeyMaxSize =  acme::PosePlugin_get_serialized_key_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            serializedKeyMaxSizeV2 = PosePlugin_get_serialized_key_max_size_for_keyhash(
                epd,
                RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                0);

            if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                epd,
                endpoint_info,
                serializedKeyMaxSize,
                serializedKeyMaxSizeV2))  
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }

            if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                serializedSampleMaxSize = acme::PosePlugin_get_serialized_sample_max_size(
                    epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                    acme::PosePlugin_get_serialized_sample_max_size, epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                    PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE) {
                    PRESTypePluginDefaultEndpointData_delete(epd);
                    return NULL;
                }
            }

            return epd;
        } catch (...) {
            return NULL;
        }
    }

    void 
    PosePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data)
    {  
        PRESTypePluginDefaultEndpointData_delete(endpoint_data);
    }

    void    
    PosePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pose *sample,
        void *handle)
    {
        try {
            ::rti::topic::reset_sample(*sample);
        } catch(const std::exception& ex) {
            RTICdrLog_logWithFunctionName(
                RTI_LOG_BIT_EXCEPTION,
                "PosePlugin_return_sample",
                &RTI_LOG_ANY_FAILURE_ss,
                "exception: ",
                ex.what());
        }

        PRESTypePluginDefaultEndpointData_returnSample(
            endpoint_data, sample, handle);
    }

    RTIBool 
    PosePlugin_copy_sample(
        PRESTypePluginEndpointData,
        Pose *dst,
        const Pose *src)
    {
        return acme::PosePluginSupport_copy_data(dst,src);
    }

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */
    unsigned int 
    PosePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    RTIBool
    PosePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Pose *sample,
        ::dds::core::policy::DataRepresentationId representation)
    {
        using namespace ::dds::core::policy;

        try{
            RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
            struct RTICdrStream stream;
            struct PRESTypePluginDefaultEndpointData epd;
            RTIBool result;
            struct PRESTypePluginDefaultParticipantData pd;
            struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
            struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

            if (length == NULL) {
                return RTI_FALSE;
            }

            RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
            epd.programContext = defaultProgramContext;
            epd._participantData = &pd;
            epd.typePlugin = &plugin;
            epd.programContext.endpointPluginData = &epd;
            plugin.typeCode = (struct RTICdrTypeCode *)
            (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Pose >::get().native()
            ;
            pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            Pose, 
            true, true, true>();

            encapsulationId = DDS_TypeCode_get_native_encapsulation(
                (DDS_TypeCode *) plugin.typeCode,
                representation);

            if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                return RTI_FALSE;
            }

            epd._maxSizeSerializedSample =
            PosePlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd, 
                RTI_TRUE, 
                encapsulationId,
                0);

            if (buffer == NULL) {
                *length = 
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

                if (*length == 0) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }    

            RTICdrStream_init(&stream);
            RTICdrStream_set(&stream, (char *)buffer, *length);

            result = PRESTypePlugin_interpretedSerialize(
                (PRESTypePluginEndpointData)&epd, 
                sample, 
                &stream, 
                RTI_TRUE, 
                encapsulationId,
                RTI_TRUE, 
                NULL);  

            *length = RTICdrStream_getCurrentPositionOffset(&stream);
            return result;     
        } catch (...) {
            return RTI_FALSE;
        }
    }

    RTIBool
    PosePlugin_deserialize_from_cdr_buffer(
        Pose *sample,
        const char * buffer,
        unsigned int length)
    {
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin;
        struct PRESTypePluginDefaultEndpointData epd;

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, length);

        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< Pose >::get().native()
        ;
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        Pose, 
        true, true, true>();

        epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
        epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

        ::rti::topic::reset_sample(*sample);
        return PRESTypePlugin_interpretedDeserialize( 
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream, 
            RTI_TRUE, 
            RTI_TRUE, 
            NULL);
    }

    unsigned int 
    PosePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        try {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        } catch (...) {
            return 0;
        }    
    }

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    PRESTypePluginKeyKind 
    PosePlugin_get_key_kind(void)
    {
        return PRES_TYPEPLUGIN_USER_KEY;
    }

    RTIBool PosePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Pose **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos)
    {
        try {
            RTIBool result;
            if (drop_sample) {} /* To avoid warnings */
            stream->_xTypesState.unassignable = RTI_FALSE;
            result= PRESTypePlugin_interpretedDeserializeKey( 
                endpoint_data, (sample != NULL)?*sample:NULL, stream,
                deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
            if (result) {
                if (stream->_xTypesState.unassignable) {
                    result = RTI_FALSE;
                }
            }
            return result;    
        } catch (...) {
            return RTI_FALSE;
        }     
    }

    unsigned int
    PosePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        try {
            unsigned int size;
            RTIBool overflow = RTI_FALSE;

            size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
            if (overflow) {
                size = RTI_CDR_MAX_SERIALIZED_SIZE;
            }

            return size;
        } catch (...) {
            return RTI_FALSE;
        }    
    }

    unsigned int
    PosePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment)
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
            endpoint_data,
            &overflow,
            encapsulation_id,
            current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }

    RTIBool 
    PosePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PoseKeyHolder *dst, 
        const Pose *src)
    {
        try {
            if (endpoint_data) {} /* To avoid warnings */   

            dst->obj_id() = src->obj_id();
            return RTI_TRUE;
        } catch (...) {
            return RTI_FALSE;
        }    
    }

    RTIBool 
    PosePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Pose *dst, const
        PoseKeyHolder *src)
    {
        try {
            if (endpoint_data) {} /* To avoid warnings */   
            dst->obj_id() = src->obj_id();
            return RTI_TRUE;
        } catch (...) {
            return RTI_FALSE;
        }    
    }

    RTIBool 
    PosePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos)
    {
        Pose * sample = NULL;
        sample = (Pose *)
        PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
        if (sample == NULL) {
            return RTI_FALSE;
        }
        if (!PRESTypePlugin_interpretedSerializedSampleToKey(
            endpoint_data,
            sample,
            stream, 
            deserialize_encapsulation, 
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!PRESTypePlugin_interpretedInstanceToKeyHash(
            endpoint_data,
            keyhash,
            sample,
            RTICdrStream_getEncapsulationKind(stream))) {
            return RTI_FALSE;
        }
        return RTI_TRUE;   
    }

    /* ------------------------------------------------------------------------
    * Plug-in Installation Methods
    * ------------------------------------------------------------------------ */
    struct PRESTypePlugin *PosePlugin_new(void) 
    { 
        struct PRESTypePlugin *plugin = NULL;
        const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

        RTIOsapiHeap_allocateStructure(
            &plugin, struct PRESTypePlugin);
        if (plugin == NULL) {
            return NULL;
        }

        plugin->version = PLUGIN_VERSION;

        /* set up parent's function pointers */
        plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        acme::PosePlugin_on_participant_attached;
        plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        acme::PosePlugin_on_participant_detached;
        plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        acme::PosePlugin_on_endpoint_attached;
        plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        acme::PosePlugin_on_endpoint_detached;

        plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        acme::PosePlugin_copy_sample;
        plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        PosePlugin_create_sample;
        plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        PosePlugin_destroy_sample;

        plugin->serializeFnc = 
        (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
        plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
        plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        acme::PosePlugin_get_serialized_sample_max_size;
        plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleMinSize;
        plugin->getDeserializedSampleMaxSizeFnc = NULL; 
        plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        PosePlugin_get_sample;
        plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        PosePlugin_return_sample;
        plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        acme::PosePlugin_get_key_kind;

        plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        acme::PosePlugin_get_serialized_key_max_size;
        plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        PRESTypePlugin_interpretedSerializeKey;
        plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        acme::PosePlugin_deserialize_key;
        plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        PRESTypePlugin_interpretedDeserializeKey;

        plugin-> instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        PRESTypePlugin_interpretedInstanceToKeyHash;
        plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        acme::PosePlugin_serialized_sample_to_keyhash;

        plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        PosePlugin_get_key;
        plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        PosePlugin_return_key;

        plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        acme::PosePlugin_instance_to_key;
        plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        acme::PosePlugin_key_to_instance;
        plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
        #ifdef NDDS_STANDALONE_TYPE
        plugin->typeCode = NULL; 
        #else
        plugin->typeCode = (struct RTICdrTypeCode *) 
        &::rti::topic::dynamic_type< acme::Pose >::get().native();
        #endif
        plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

        /* Serialized buffer */
        plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        PosePlugin_get_buffer;
        plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        PosePlugin_return_buffer;
        plugin->getBufferWithParams = NULL;
        plugin->returnBufferWithParams = NULL;
        plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        PRESTypePlugin_interpretedGetSerializedSampleSize;

        plugin->getWriterLoanedSampleFnc = NULL; 
        plugin->returnWriterLoanedSampleFnc = NULL;
        plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
        plugin->validateWriterLoanedSampleFnc = NULL;
        plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

        static const char * TYPE_NAME = "acme::Pose";
        plugin->endpointTypeName = TYPE_NAME;
        plugin->isMetpType = RTI_FALSE;
        return plugin;
    }

    void
    PosePlugin_delete(struct PRESTypePlugin *plugin)
    {
        RTIOsapiHeap_freeStructure(plugin);
    } 
} /* namespace acme  */
#undef RTI_CDR_CURRENT_SUBMODULE 
