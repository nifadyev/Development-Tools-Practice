set(target ${TESTS})

file(GLOB srcs "*.cpp")
set_source_files_properties(${srcs} PROPERTIES
    LABELS "${MODULE};Test")

# VS2012 doesn't support correctly the tuples yet,
# see http://code.google.com/p/googletest/issues/detail?id=412
if(MSVC)
    add_definitions(/D _VARIADIC_MAX=10)
endif()

add_executable(${target} ${srcs} ${hdrs})
set_target_properties(${target} PROPERTIES
    LABELS "${MODULE};Test")

if (UNIX)
  target_link_libraries(${target} gtest ${CMAKE_THREAD_LIBS_INIT} pthread)
endif (UNIX)
target_link_libraries(${target} gtest ${LIBRARY})

add_test(
    NAME ${MODULE}_gtest
    COMMAND ${target}
)
set_tests_properties (${MODULE}_gtest PROPERTIES
    LABELS "${MODULE}")
