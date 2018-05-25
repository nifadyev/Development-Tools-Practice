set(target ${APPLICATION})

file(GLOB srcs "*.cpp")
set_source_files_properties(${srcs} PROPERTIES
    LABELS "${MODULE};Application")

add_executable(${target} ${srcs})
set_target_properties(${target} PROPERTIES
    OUTPUT_NAME ${MODULE}
    LABELS "${MODULE};Application")

target_link_libraries(${target} ${LIBRARY})
if (UNIX)
  target_link_libraries(${target} ${CMAKE_THREAD_LIBS_INIT})
endif (UNIX)
