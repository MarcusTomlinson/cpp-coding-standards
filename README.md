# Cpp-Coding-Standards

Minimal example project to demonstrate some modern C++ best practices.

(See: https://www.linkedin.com/pulse/10-years-modern-c-marcus-tomlinson)

## Build

First, install CMake (https://cmake.org/download/), then execute the following:

```
cd cpp-coding-standards
mkdir build
cd build
cmake ..
make
```

- `cmake ..` will auto-detect your IDE / compiler. To manually select one, use `cmake -G`.
- When building for an IDE, instead of `make`, simply open the cmake generated project file.
