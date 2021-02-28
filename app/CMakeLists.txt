include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../lib/include
)

file(GLOB hdrs include/*.h include/*.hpp)
file(GLOB srcs src/*.cpp)

add_executable(
    ${PROJECT_NAME}-app
    ${hdrs}
    ${srcs}
)

target_link_libraries(
    ${PROJECT_NAME}-app
    ${PROJECT_NAME}-lib
)