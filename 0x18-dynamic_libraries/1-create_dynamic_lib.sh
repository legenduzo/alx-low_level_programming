#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -shared *.c -o liball.so
