#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c -fPIC
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
