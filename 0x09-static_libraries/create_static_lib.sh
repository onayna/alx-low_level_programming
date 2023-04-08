#!/bin/bash
gcc -c *.c
ar -rcs liball.a *.c
ar -t liball.a
nm liball.a
