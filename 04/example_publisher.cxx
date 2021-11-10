/*
* (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
* RTI grants Licensee a license to use, modify, compile, and create derivative
* works of the software solely for use with RTI Connext DDS. Licensee may
* redistribute copies of the software provided that all such copies are subject
* to this license. The software is provided "as is", with no warranty of any
* type, including any warranty for fitness for any purpose. RTI is under no
* obligation to maintain or support the software. RTI shall not be liable for
* any incidental or consequential damages arising out of the use or inability
* to use the software.
*/

#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging

#include "application.hpp"  // for command line parsing and ctrl-c
#include "example.hpp"

void run_publisher_application(unsigned int domain_id, unsigned int sample_count)
{
    // LAB #3 - remove string literals, use const strings from IDL
    // LAB #2 - Create a (non-default) qosProvider, then create the entities 
    // using explicitly names QoS profiles
	std::string qosProfile;
	qosProfile.clear();
	qosProfile.append(acme::qos_library).append("::").append(acme::qos_profile);
	dds::core::QosProvider qosProvider("file://MY_QOS_PROFILES.xml", qosProfile);

	dds::domain::DomainParticipant participant(domain_id, qosProvider.participant_qos());

    // LAB #3 - remove string literal, use const string from IDL
    dds::topic::Topic<acme::Pose> topic (participant, acme::pose_topic_name);

    dds::pub::Publisher publisher(participant, qosProvider.publisher_qos());

    dds::pub::DataWriter<acme::Pose> writer(
            publisher,
            topic,
            qosProvider.datawriter_qos(),
            NULL, // no listener
            dds::core::status::StatusMask::all());
            
    acme::Pose data;
    for (unsigned int samples_written = 0;
    !application::shutdown_requested && samples_written < sample_count;
    samples_written++) {

        // LAB #1 - include some dummy data in the sample, just so we aren't
        // writing empty samples
        data.obj_id(1);
        data.position(acme::Point(sin(samples_written),cos(samples_written),tan(samples_written)));

        std::cout << "Writing acme::Pose, count " << samples_written << std::endl;

        writer.write(data);

        // LAB #1 - change sleep period to 500ms (500,000,000ns)
        rti::util::sleep(dds::core::Duration(0, 500000000));
    }
}

int main(int argc, char *argv[])
{

    using namespace application;

    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    try {
        run_publisher_application(arguments.domain_id, arguments.sample_count);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_publisher_application(): " << ex.what()
        << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
