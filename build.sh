#!/bin/bash
g++ 00_env_test/main.cpp -o 00_env_test/main \
-IC:/msys64/mingw64/include \
-LC:/msys64/mingw64/lib \
-lsfml-graphics -lsfml-window -lsfml-system

if [ $? -eq 0 ]; then
    ./00_env_test/main.exe
fi
