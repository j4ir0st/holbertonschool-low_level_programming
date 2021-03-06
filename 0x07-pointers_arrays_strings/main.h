#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

void print_diagsums(int *a, int size);

/**
 * print_chessboard - prints the posicion of a chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8]);

/**
 * *_strstr - locates a substring
 * @haystack: char argument as pointer
 * @needle: char argument
 */

char *_strstr(char *haystack, char *needle);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char argument as pointer
 * @accept: char argument
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strspn - gets the length of a prefix substring
 * @s: char argument as pointer
 * @accept: char argument
 */

unsigned int _strspn(char *s, char *accept);

/**
 * *_strchr - locates a character in a string
 * @s: char argument as pointer
 * @c: char argument
 */

char *_strchr(char *s, char c);

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: char argument as destiny
 * @src: char argument as source
 * @n: unsigned int argument
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_memset - fills memory with a constant byte
 * @s: char argument as pointer
 * @b: char argument
 * @n: int argument
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);


/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase
 * @c: the character to check
 * Return: int
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c);

/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);

/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int);

/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);


/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n);

#endif
