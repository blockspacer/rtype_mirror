set(SOURCES components-test.cpp)

add_test_core(componentsTest components-test ${SOURCES})
target_include_directories(components-test PRIVATE
        ${CMAKE_SOURCE_DIR}/vendor/rapidjson/include
        ${CMAKE_SOURCE_DIR}/Project/
        $ENV{SFEMOVIE_ROOT}/include)
target_link_libraries(components-test ${SFML_LIBRARIES} core-log core-utils core-meta)
if(WIN32)
    add_custom_command(TARGET components-test POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/bin/assets ${CMAKE_SOURCE_DIR}/build-${CMAKE_BUILD_TYPE}/test/components/assets)
endif()