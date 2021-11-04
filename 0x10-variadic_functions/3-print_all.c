#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - check the code
 * @format: const char
 */

void print_all(const char * const format, ...)
{
	va_list m;
	char *sep = ", ";
	int c = 0;
	char *str;

	va_start(m, format);
	while (format != NULL && *(format + c) != '\0')
	{
		switch (*(format + c))
		{
		case 'c':
			printf("%c", va_arg(m, int));
			break;
		case 'i':
			printf("%i", va_arg(m, int));
			break;
		case 'f':
			printf("%f", va_arg(m, double));
			break;
		case 's':
			str = va_arg(m, char*);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			c++;
			continue;
		}
		c++;
		if (*(format + c) != '\0')
		{
			printf("%s", sep);
		}
	}
	printf("\n");
	va_end(m);
}
