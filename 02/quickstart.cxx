

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from quickstart.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "quickstart.hpp"
#include "quickstartPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace qs {

    // ---- qs_type: 

    qs_type::qs_type() :
        m_id_ (0) ,
        m_value1_ (0) ,
        m_condition1_ (false)  {
    }   

    qs_type::qs_type (
        int32_t id,
        int32_t value1,
        bool condition1,
        const std::string& name)
        :
            m_id_( id ),
            m_value1_( value1 ),
            m_condition1_( condition1 ),
            m_name_( name ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    qs_type::qs_type(qs_type&& other_) OMG_NOEXCEPT  :m_id_ (std::move(other_.m_id_))
    ,
    m_value1_ (std::move(other_.m_value1_))
    ,
    m_condition1_ (std::move(other_.m_condition1_))
    ,
    m_name_ (std::move(other_.m_name_))
    {
    } 

    qs_type& qs_type::operator=(qs_type&&  other_) OMG_NOEXCEPT {
        qs_type tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void qs_type::swap(qs_type& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_id_, other_.m_id_);
        swap(m_value1_, other_.m_value1_);
        swap(m_condition1_, other_.m_condition1_);
        swap(m_name_, other_.m_name_);
    }  

    bool qs_type::operator == (const qs_type& other_) const {
        if (m_id_ != other_.m_id_) {
            return false;
        }
        if (m_value1_ != other_.m_value1_) {
            return false;
        }
        if (m_condition1_ != other_.m_condition1_) {
            return false;
        }
        if (m_name_ != other_.m_name_) {
            return false;
        }
        return true;
    }
    bool qs_type::operator != (const qs_type& other_) const {
        return !this->operator ==(other_);
    }

    // --- Getters and Setters: -------------------------------------------------
    int32_t& qs::qs_type::id() OMG_NOEXCEPT {
        return m_id_;
    }

    const int32_t& qs::qs_type::id() const OMG_NOEXCEPT {
        return m_id_;
    }

    void qs::qs_type::id(int32_t value) {
        m_id_ = value;
    }

    int32_t& qs::qs_type::value1() OMG_NOEXCEPT {
        return m_value1_;
    }

    const int32_t& qs::qs_type::value1() const OMG_NOEXCEPT {
        return m_value1_;
    }

    void qs::qs_type::value1(int32_t value) {
        m_value1_ = value;
    }

    bool& qs::qs_type::condition1() OMG_NOEXCEPT {
        return m_condition1_;
    }

    const bool& qs::qs_type::condition1() const OMG_NOEXCEPT {
        return m_condition1_;
    }

    void qs::qs_type::condition1(bool value) {
        m_condition1_ = value;
    }

    std::string& qs::qs_type::name() OMG_NOEXCEPT {
        return m_name_;
    }

    const std::string& qs::qs_type::name() const OMG_NOEXCEPT {
        return m_name_;
    }

    void qs::qs_type::name(const std::string& value) {
        m_name_ = value;
    }

    std::ostream& operator << (std::ostream& o,const qs_type& sample)
    {
        rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "id: " << sample.id()<<", ";
        o << "value1: " << sample.value1()<<", ";
        o << "condition1: " << sample.condition1()<<", ";
        o << "name: " << sample.name() ;
        o <<"]";
        return o;
    }

} // namespace qs  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<qs::qs_type> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode qs_type_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE((128));
                static DDS_TypeCode_Member qs_type_g_tc_members[4]=
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"value1",/* Member name */
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
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"condition1",/* Member name */
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
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"name",/* Member name */
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
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode qs_type_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"qs::qs_type", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        qs_type_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for qs_type*/

                if (is_initialized) {
                    return &qs_type_g_tc;
                }

                qs_type_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                qs_type_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                qs_type_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                qs_type_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&qs_type_g_tc_name_string;

                is_initialized = RTI_TRUE;

                return &qs_type_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<qs::qs_type>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<qs::qs_type>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<qs::qs_type>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                qs::qs_typePlugin_new,
                qs::qs_typePlugin_delete);
        }

        std::vector<char>& topic_type_support<qs::qs_type>::to_cdr_buffer(
            std::vector<char>& buffer, const qs::qs_type& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = qs_typePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = qs_typePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<qs::qs_type>::from_cdr_buffer(qs::qs_type& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = qs_typePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create qs::qs_type from cdr buffer");
        }

        void topic_type_support<qs::qs_type>::reset_sample(qs::qs_type& sample) 
        {
            rti::topic::reset_sample(sample.id());
            rti::topic::reset_sample(sample.value1());
            rti::topic::reset_sample(sample.condition1());
            rti::topic::reset_sample(sample.name());
        }

        void topic_type_support<qs::qs_type>::allocate_sample(qs::qs_type& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.name(),  -1, 128);
        }

    }
}  

