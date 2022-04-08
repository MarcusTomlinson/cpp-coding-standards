# Configure ipc_lib

cpp_lib_src = [
    'src/BaseClass.cpp',
    'src/DerivedClass.cpp'
]

cpp_lib_inc = include_directories(
    'include'
)

cpp_lib = static_library(
    'CppCodingStandards',
    format_first,
    cpp_lib_src,
    include_directories: [cpp_lib_inc]
)

cpp_lib_dep = declare_dependency(
  link_with : cpp_lib,
  include_directories : cpp_lib_inc
)
