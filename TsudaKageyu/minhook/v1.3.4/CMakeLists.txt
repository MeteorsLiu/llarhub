cmake_minimum_required(VERSION 3.5)
project(minhook LANGUAGES C)

add_library(minhook minhook_stub.c)
target_include_directories(minhook PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
install(TARGETS minhook
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
install(DIRECTORY include/ DESTINATION include)
