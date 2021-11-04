#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @separator: const char
 * @n: unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int c;

	va_start(m, n);
	for (c = 0; c < n; c++)
	{
		printf("%i", va_arg(m, int));
		if (c == n - 1)
		{
			continue;
		}
		printf("%s", separator);
	}
	printf("\n");
}
