#!/bin/bash
cc -fPIC -c *.c
cc -shared -o liball.so *.o
rm *.o
