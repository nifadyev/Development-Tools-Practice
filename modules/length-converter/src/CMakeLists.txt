set(target ${LIBRARY})

file(GLOB srcs "*.cpp")
file(GLOB hdrs "../include/*.h")
set_source_files_properties(${srcs} ${hdrs} PROPERTIES
    LABELS "${MODULE};Library")

add_library(${target} STATIC ${srcs} ${hdrs})
set_target_properties(${target} PROPERTIES
    OUTPUT_NAME ${MODULE}
    LABELS "${MODULE};Library")

if (UNIX)
  target_link_libraries(${target} ${CMAKE_THREAD_LIBS_INIT})
endif (UNIX)
target_link_libraries(${target} ${LIBRARY_DEPS})

set(LIBRARY_DEPS "${LIBRARY_DEPS};${target}" PARENT_SCOPE)
