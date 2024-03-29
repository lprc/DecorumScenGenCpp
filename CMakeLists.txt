cmake_minimum_required(VERSION 3.14)

project(DecorumScenGenCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# Also requires one of: libbfd (gnu binutils), libdwarf, libdw (elfutils)
FetchContent_Declare(backward
    GIT_REPOSITORY https://github.com/bombela/backward-cpp
    GIT_TAG master  # or a version tag, such as v1.6
    SYSTEM          # optional, the Backward include directory will be treated as system directory
)
FetchContent_MakeAvailable(backward)

set(MAIN_SRC
src/main.cpp)
add_executable(decorumScenGen ${MAIN_SRC})
# Add Backward to your target (either Backward::Interface, Backward::Object, or Backward::Backward)
target_link_libraries(decorumScenGen PUBLIC Backward::Object)

