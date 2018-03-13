project(cpp_primer_L1)
cmake_minimum_required(VERSION 2.8)


aux_source_directory(. SRC_LIST)

include_directories(./ ./L1)
include_directories(./ ./L2)

add_subdirectory(L1)
add_subdirectory(L2)
add_executable(${PROJECT_NAME} ${SRC_LIST})


target_link_libraries(cpp_primer_L1 L1)
target_link_libraries(cpp_primer_L1 L2)
