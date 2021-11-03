#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

#endif