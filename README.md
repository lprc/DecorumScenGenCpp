# DecorumScenGenCpp
A Scenario Generator for Decorum

# Setup
Using CMake:

```cmake
mkdir build/Debug
cd build/Debug
cmake
  -DBACKWARD_HAS_DWARF=ON \
  -DCMAKE_CXX_COMPILER_LAUNCHER=ccache \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  ../..

cd ../..
cmake --build .
```