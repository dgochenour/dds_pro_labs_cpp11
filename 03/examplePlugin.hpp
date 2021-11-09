

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef examplePlugin_1944008709_h
#define examplePlugin_1944008709_h

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

namespace acme {

    #define PointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define PointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Point*
    PointPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Point*
    PointPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Point*
    PointPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PointPluginSupport_copy_data(
        Point *out,
        const Point *in);

    NDDSUSERDllExport extern void 
    PointPluginSupport_destroy_data_w_params(
        Point *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PointPluginSupport_destroy_data_ex(
        Point *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PointPluginSupport_destroy_data(
        Point *sample);

    NDDSUSERDllExport extern void 
    PointPluginSupport_print_data(
        const Point *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PointPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Point *out,
        const Point *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Point *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    PointPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Point **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PointPlugin_deserialize_from_cdr_buffer(
        Point *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    PointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PointPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PointPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PointPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Point ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    #define QuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define QuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define QuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define QuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define QuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Quaternion*
    QuaternionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Quaternion*
    QuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Quaternion*
    QuaternionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    QuaternionPluginSupport_copy_data(
        Quaternion *out,
        const Quaternion *in);

    NDDSUSERDllExport extern void 
    QuaternionPluginSupport_destroy_data_w_params(
        Quaternion *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    QuaternionPluginSupport_destroy_data_ex(
        Quaternion *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    QuaternionPluginSupport_destroy_data(
        Quaternion *sample);

    NDDSUSERDllExport extern void 
    QuaternionPluginSupport_print_data(
        const Quaternion *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    QuaternionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Quaternion *out,
        const Quaternion *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    QuaternionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Quaternion *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    QuaternionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Quaternion **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    QuaternionPlugin_deserialize_from_cdr_buffer(
        Quaternion *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    QuaternionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    QuaternionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    QuaternionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    QuaternionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    QuaternionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Quaternion ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Pose
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Pose)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Pose must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Pose.
    */
    typedef  class Pose PoseKeyHolder;

    #define PosePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define PosePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PosePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PosePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PosePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PosePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PosePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Pose*
    PosePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Pose*
    PosePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Pose*
    PosePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PosePluginSupport_copy_data(
        Pose *out,
        const Pose *in);

    NDDSUSERDllExport extern void 
    PosePluginSupport_destroy_data_w_params(
        Pose *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PosePluginSupport_destroy_data_ex(
        Pose *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PosePluginSupport_destroy_data(
        Pose *sample);

    NDDSUSERDllExport extern void 
    PosePluginSupport_print_data(
        const Pose *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Pose*
    PosePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Pose*
    PosePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PosePluginSupport_destroy_key_ex(
        PoseKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PosePluginSupport_destroy_key(
        PoseKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PosePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PosePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PosePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PosePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PosePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pose *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PosePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Pose *out,
        const Pose *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PosePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Pose *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    PosePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Pose **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    PosePlugin_deserialize_from_cdr_buffer(
        Pose *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    PosePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PosePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PosePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PosePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PosePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Pose ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PosePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PoseKeyHolder *key, 
        const Pose *instance);

    NDDSUSERDllExport extern RTIBool 
    PosePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Pose *instance, 
        const PoseKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PosePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PosePlugin_new(void);

    NDDSUSERDllExport extern void
    PosePlugin_delete(struct PRESTypePlugin *);

} /* namespace acme  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* examplePlugin_1944008709_h */

