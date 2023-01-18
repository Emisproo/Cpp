cmake_minimum_required(VERSION 3.22)
project(Drone)
set(CMAKE_CXX_STANDARD 11)

file(GLOB TEST_SRC_FILES_PPAL ${PROJECT_SOURCE_DIR}/sources/main.cpp
${PROJECT_SOURCE_DIR}/sources/*.cpp)
add_executable(Drone ${TEST_SRC_FILES_PPAL})

#aceleration test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestAceleration.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)

add_subdirectory(googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestAceleration ${TEST_SRC_FILES})
target_link_libraries(runTestAceleration gtest gtest_main)
add_test(UnitTests runTestAceleration)

#autoreturn test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestAutoReturn.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestAutoRturn ${TEST_SRC_FILES})
target_link_libraries(runTestAutoRturn gtest gtest_main)
add_test(UnitTests runTestAutoRturn)

#brake test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestBrake.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestBrake ${TEST_SRC_FILES})
target_link_libraries(runTestBrake gtest gtest_main)
add_test(UnitTests runTestBrake)

#camara test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestCamara.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestCamara ${TEST_SRC_FILES})
target_link_libraries(runTestCamara gtest gtest_main)
add_test(UnitTests runTestCamara)

#descent test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestDescent.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestDescent ${TEST_SRC_FILES})
target_link_libraries(runTestDescent gtest gtest_main)
add_test(UnitTests runTestDescent)

#dron test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestDrone.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestDrone ${TEST_SRC_FILES})
target_link_libraries(runTestDrone gtest gtest_main)
add_test(UnitTests runTestDrone)

#elevation test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestElevation.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestElevation ${TEST_SRC_FILES})
target_link_libraries(runTestElevation gtest gtest_main)
add_test(UnitTests runTestElevation)

#forward test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestForward.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestForward ${TEST_SRC_FILES})
target_link_libraries(runTestForward gtest gtest_main)
add_test(UnitTests runTestForward)

#landing test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestLanding.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestLanding ${TEST_SRC_FILES})
target_link_libraries(runTestLanding gtest gtest_main)
add_test(UnitTests runTestLanding)

#menufuns test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestMenuFuns.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestMenuFuns ${TEST_SRC_FILES})
target_link_libraries(runTestMenuFuns gtest gtest_main)
add_test(UnitTests runTestMenuFuns)

#package test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestPackage.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestPackage ${TEST_SRC_FILES})
target_link_libraries(runTestPackage gtest gtest_main)
add_test(UnitTests runTestPackage)

#reverse test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestReverse.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestReverse ${TEST_SRC_FILES})
target_link_libraries(runTestReverse gtest gtest_main)
add_test(UnitTests runTestReverse)

#takeoff test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestTakeoff.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestTakeoff ${TEST_SRC_FILES})
target_link_libraries(runTestTakeoff gtest gtest_main)
add_test(UnitTests runTestTakeoff)

#TurnLeft test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestTurnLeft.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestTurnLeft ${TEST_SRC_FILES})
target_link_libraries(runTestTurnLeft gtest gtest_main)
add_test(UnitTests runTestTurnLeft)

#TurnRight test
message("Testing Enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/TestTurnRight.cpp 
${PROJECT_SOURCE_DIR}/sources/*.cpp)


enable_testing()
include_directories(${gtest_SOURCE_DIR}/sources ${gtest_SOURCE_DIR})
add_executable(runTestTurnRight ${TEST_SRC_FILES})
target_link_libraries(runTestTurnRight gtest gtest_main)
add_test(UnitTests runTestTurnRight)