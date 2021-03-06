set (OUTPUT_FILE_NAME bib)
set (BACKUP_VERSION 0)
set (COMPILE_FLAGS "-Wall" "-g")
set (DEPENDENCIES "-MMD -MP")
set (LANG_EXT "cpp")

cmake_minimum_required(VERSION 3.10.2)
project(bib)

# prevent for in-source building
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(SEND_ERROR "In-source builds are not allowed.")
endif ()

include_directories(include)
file(GLOB SOURCES "src/*.cpp" *.cpp)
add_compile_options (${COMPILE_FLAGS})
add_executable(${OUTPUT_FILE_NAME} ${SOURCES})
add_custom_target (run ./${OUTPUT_FILE_NAME} ${LAB_NUMBER})
add_custom_target (memcheck @valgrind ./${OUTPUT_FILE_NAME})
