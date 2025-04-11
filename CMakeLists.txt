cmake_minimum_required(VERSION 3.10)
project(PTIT_C)

set(CMAKE_C_STANDARD 99)

# Tìm tất cả các file C trong thư mục này
file(GLOB C_FILES "*.c")

# Tạo executable cho từng file C
foreach(C_FILE ${C_FILES})
    get_filename_component(EXEC_NAME ${C_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${C_FILE})
endforeach()