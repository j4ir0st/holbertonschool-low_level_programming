#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * array_range - imput
 * @min: int argument
 * @max: int argument
 * Return: 0
 */

int *array_range(int min, int max);

/**
 * _calloc - imput
 * @nmemb: unsigned int argument
 * @size: unsigned int argument
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * string_nconcat - imput
 * @s1: char argument
 * @s2: char argument
 * @n: int argument
 * Return: returns 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * malloc_checked - imput
 * @b: int argument
 * Return: returns 0
 */

void *malloc_checked(unsigned int b);

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
