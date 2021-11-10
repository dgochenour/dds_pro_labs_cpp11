# RTI Connext Professional Hands-On Exercises 
# (C++11 version)

This repo contains labs used in DDS QuickStart training, C++11 version. Before
any given lab can be compiled and run, rtiddsgen should be run on the \*.idl
file in each directory. When performing this step, be sure to set the following:
- Generation: Example Files = "<disable>"
- Generation: Type files = "update"
- Generation: Makefiles = "create"
- Language = "Modern C++ (C++ 11)"

## Lab 1. Out Of The Box

  - Create IDL, then generate code
  - Give the sample members some values, just so we aren't writing empty data
  - Speed up the writes on the publisher side by reducing the sleep from 1s to 500ms 
  - In the QoS XML:
    - update publication_name and subscription_name with meaningful values (student names, etc.)
    - replace the local schema URL with a remote one

## Lab 2. Loading a user-defined XML QoS profile

  - Rename `USER_QOS_PROFILES.xml` as `MY_QOS_PROFILES.xml`
    - Use Admin Console to confirm that the DDS entity names created in ex01 are no longer present-- that is becuase the newly-named file is not loaded by default like `USER_QOS_PROFILES.xml` was.
  - rename the library to "MyLibrary" and profile to "MyProfile"
  - remove `is_default_qos="true"` from MyProfile
  - change publisher and subscriber code to use custom qosProvider

## Lab 3. Replacing string literals in the source

  - We can declare const strings in the IDL so that string literals do not have to be manually entered in source. Let's do that for:
    - The Topic name
    - The QoS library and profile
  - The type support code now needs to be regenerated
    - Generation: Example Files = "<disable>"
    - Generation: Type files = "update"
    - Generation: Makefiles = "<disable>"
    - Language = "Modern C++ (C++ 11)"
  - Update `example_publisher.cxx` and `example_subscriber.cxx` to use these constants.

## Lab 4. Deadline Qos

  - Set deadline to 1.0 sec. on DataReader
  - Discuss why not working. (QoS mismatch)
  - Add Reader listener to note Qos Error
    - In C++98 documentation, search for DDS_QosPolicyId_t; here you can match "4" to "DDS_DEADLINE_QOS_POLICY_ID"
  - Fix Writer to offer Deadline of 500ms

## Lab xx Time Based Filter

  - Speed up writer to 10HZ.
  - Note that Reader is getting swamped.
  - Set Reader Time Based Filter Minimum separation to 1.0 sec (in Qos XML) and extend deadline to 1.5 Sec.
  - Note any possible Syncopation and discuss that.


## Lab xx Ownership and fail rollover.

  - In QoS XML, set EXCLUSIVE_OWNERSHIP_QOS on both Reader and writer.
  - Set Strength to unique value for each student. (assuming unique key values from last lab)
  - Note Results.
  - Now have students all use the same key value (all writing to the same instance)
  - Start running from lowest strength to highest strength.
  - Kill apps from Highest to lowest strength.

  (If everyone is not connected to the same network, demonstrate Ownership using Shapes Demo on a
  single machine)

## Lab xx Listeners and Waitsets

  - Modify the subscriber code so that the read is done via a listener instead of the default waitset
  - don't forget to add the private count_ var in the listener class and update main while loop
    - point out that the message from the listener is printing, but so is the sleep message from the waitset
    - why isn't the data printing twice?
    - after talking about this, remove the data_available mask to rerturn the the waitset
  - Note that the waitset is actually a better approach in terms of not blocking the DDS threads

## Lab xx Reliability.

  - remove base_name="BuiltinQosLibExp::Generic.StrictReliable" from QoS
  - remove TBF and deadline QoS from DW and DR (just to clean things up)
  - Set reliability to RELIABLE_RELIABILITY_QOS in Reader.
  - Slow down writer to 1HZ.
  - Discuss that the data is now coming in at 1Hz
  - Now set writer to wait for reliable acknowledgements.
  - Discuss writer write speed.
  - Set up writer protocol to correct.

## Lab xx Late Joiner History.

  - Set Writer and Reader Durability to TRANSIENT_LOCAL_DURABILITY_QOS.
  - Set History to KEEP_LAST_HISTORY_QOS, depth 10. Vary by students.
  - Set Reader History to depth 15.
  - Add monitoring library support
    - wait for errors from statically linked libs, discuss, then fix that in the makefile
  - Start Writer then Reader apps one at a time and discuss late joiner results.

## Lab xx Content Filtered topic

  - modify publisher to change the value of name on every other send
    - run pub and sub to verify that you are seeing the expected results
  - Now modify subscriber code to add a cft
    - add code to create the parameters and Filter
    - set the filter name
    - change the reader instantiation to use ContentFilteredTopic instead of normal topic
  - open admin console to show that no new topic is shown, the filtering is logical but
    does not spawn a new entity
