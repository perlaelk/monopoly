mkdir build-dir
cd build-dir
cmake ..\.. -DCMAKE_WINDOWS_EXPORT_ALL_SYMBOLS=TRUE -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 17 2022" -A x64
cd ..
