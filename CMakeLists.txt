cmake_minimum_required(VERSION 3.21)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(extender CXX)
if(DO_TIDY)
  set(CMAKE_CXX_CLANG_TIDY clang-tidy -header-filter=.* -checks=*,-fuchsia-*,-google-*,-zircon-*,-abseil-*,-llvm-*,-llvmlibc-*,-modernize-use-trailing-return-type,-cppcoreguidelines-avoid-magic-numbers,-readability-else-after-return,-misc-non-private-member-variables-in-classes)
endif()
set (CMAKE_CXX_STANDARD 20)
add_executable(extender src/dyna_polymorphism.hpp
                        src/dyna_polymorphism.cpp
main.cpp)
target_include_directories(extender PUBLIC src)
set_target_properties(extender PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
target_compile_features(extender PUBLIC cxx_std_20)
target_compile_options(extender PUBLIC
    #-fsanitize=address,undefined
    -fno-builtin
    -Wall
    -Wextra
    -pedantic
)
#target_link_options(extender PUBLIC
#    -fsanitize=address,undefined)

