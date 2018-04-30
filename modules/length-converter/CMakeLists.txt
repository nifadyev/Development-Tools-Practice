# Declare variables for binaries' names
get_filename_component(DIR_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)
set(MODULE      "${DIR_NAME}")
set(LIBRARY     "lib_${MODULE}")
set(TESTS       "test_${MODULE}")

# Include directory with public headers
include_directories("./")

# Add all submodules
add_subdirectory(src)
add_subdirectory(test)
