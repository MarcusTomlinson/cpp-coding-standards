include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB hdrs include/*.h include/*.hpp)
file(GLOB srcs src/*.cpp)

add_library(
    ${PROJECT_NAME}-lib
    ${hdrs}
    ${srcs}
)
