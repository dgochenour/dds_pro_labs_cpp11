

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef examplePlugin_1944008421_h
#define examplePlugin_1944008421_h

#include "example.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct LargeType
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct LargeType)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* LargeType must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct LargeType.
*/
typedef  class LargeType LargeTypeKeyHolder;

#define LargeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define LargeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LargeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define LargeTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define LargeTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define LargeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LargeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LargeType*
LargeTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LargeType*
LargeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LargeType*
LargeTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LargeTypePluginSupport_copy_data(
    LargeType *out,
    const LargeType *in);

NDDSUSERDllExport extern void 
LargeTypePluginSupport_destroy_data_w_params(
    LargeType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LargeTypePluginSupport_destroy_data_ex(
    LargeType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LargeTypePluginSupport_destroy_data(
    LargeType *sample);

NDDSUSERDllExport extern void 
LargeTypePluginSupport_print_data(
    const LargeType *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern LargeType*
LargeTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LargeType*
LargeTypePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
LargeTypePluginSupport_destroy_key_ex(
    LargeTypeKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LargeTypePluginSupport_destroy_key(
    LargeTypeKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
LargeTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
LargeTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
LargeTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
LargeTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
LargeTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    LargeType *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
LargeTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LargeType *out,
    const LargeType *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
LargeTypePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const LargeType *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
LargeTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    LargeType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
LargeTypePlugin_deserialize_from_cdr_buffer(
    LargeType *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
LargeTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
LargeTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LargeTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LargeTypePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LargeTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    LargeType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LargeTypePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LargeTypeKeyHolder *key, 
    const LargeType *instance);

NDDSUSERDllExport extern RTIBool 
LargeTypePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    LargeType *instance, 
    const LargeTypeKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
LargeTypePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
LargeTypePlugin_new(void);

NDDSUSERDllExport extern void
LargeTypePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* examplePlugin_1944008421_h */

