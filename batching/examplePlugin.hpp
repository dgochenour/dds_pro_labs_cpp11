

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef examplePlugin_1944008408_h
#define examplePlugin_1944008408_h

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
* By default, this type is struct SmallType
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct SmallType)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* SmallType must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct SmallType.
*/
typedef  class SmallType SmallTypeKeyHolder;

#define SmallTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define SmallTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SmallTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define SmallTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SmallTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define SmallTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SmallTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SmallType*
SmallTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SmallType*
SmallTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SmallType*
SmallTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SmallTypePluginSupport_copy_data(
    SmallType *out,
    const SmallType *in);

NDDSUSERDllExport extern void 
SmallTypePluginSupport_destroy_data_w_params(
    SmallType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SmallTypePluginSupport_destroy_data_ex(
    SmallType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SmallTypePluginSupport_destroy_data(
    SmallType *sample);

NDDSUSERDllExport extern void 
SmallTypePluginSupport_print_data(
    const SmallType *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern SmallType*
SmallTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SmallType*
SmallTypePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SmallTypePluginSupport_destroy_key_ex(
    SmallTypeKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SmallTypePluginSupport_destroy_key(
    SmallTypeKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SmallTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SmallTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
SmallTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SmallTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
SmallTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SmallType *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
SmallTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SmallType *out,
    const SmallType *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
SmallTypePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const SmallType *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
SmallTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SmallType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SmallTypePlugin_deserialize_from_cdr_buffer(
    SmallType *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
SmallTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
SmallTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SmallTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SmallTypePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SmallTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SmallType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SmallTypePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SmallTypeKeyHolder *key, 
    const SmallType *instance);

NDDSUSERDllExport extern RTIBool 
SmallTypePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SmallType *instance, 
    const SmallTypeKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SmallTypePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SmallTypePlugin_new(void);

NDDSUSERDllExport extern void
SmallTypePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* examplePlugin_1944008408_h */

