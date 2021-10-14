#include <stdio.h>
/**
 * puts_half - Entry point
 * @str: char variable
 *
 */
void puts_half(char *str)
{
	int n = 0;

	while (str[n] != 0)
	{
		n++;
	}

	if (n % 2 != 0)
	{
		n = (n + 1) / 2;
	}
	else
	{
		n = n / 2;
	}
	while (str[n] != 0)
	{
		printf("%c", str[n]);
		n++;
	}
	printf("\n");
}
