#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{

	_putchar(48 + (n % 10));

	return (n % 10);
}
