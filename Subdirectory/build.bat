@echo off

del .\build /f /q

cmake -S . -B .\build
cmake --build .\build

.\build\Debug\Demo3.exe