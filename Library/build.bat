@echo off

del .\build /f /q

cmake -S . -B .\build
cmake --build .\build

.\build\Debug\Demo4.exe