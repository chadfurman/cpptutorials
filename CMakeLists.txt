cmake_minimum_required(VERSION 2.6)
project (Tutorial)
# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
        "${PROJECT_SOURCE_DIR}/TutorialConfig.hpp.in"
        "${PROJECT_BINARY_DIR}/TutorialConfig.hpp"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# optionally include other files
option (USE_TUTORIALS "Use the tutorial files provided with this project" ON)

if (USE_TUTORIALS)
    include_directories("${PROJECT_SOURCE_DIR}/CppTutorials")
    add_subdirectory(CppTutorials)
    set (EXTRA_LIBS ${EXTRA_LIBS} CppTutorials)

endif (USE_TUTORIALS)

# add the executable
add_executable(Tutorial main.cpp)
target_link_libraries(Tutorial CppTutorials_strings)
target_link_libraries(Tutorial CppTutorials_variables)
target_link_libraries(Tutorial CppTutorials_structs)
target_link_libraries(Tutorial CppTutorials_pointers)
target_link_libraries(Tutorial CppTutorials_files)
target_link_libraries(Tutorial CppTutorials_typecasting)
target_link_libraries(Tutorial CppTutorials_classes)

install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

