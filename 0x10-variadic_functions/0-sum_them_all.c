#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n: size of sum
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int c;
	int sum = 0;

	va_start(m, n);
	for (c = 0; c < n; c++)
	{
		sum = sum + va_arg(m, int);
	}
	return (sum);
}
