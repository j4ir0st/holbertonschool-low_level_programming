#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#define MIN(a,b) ((a) < (b) ? a : b)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);

#endif
