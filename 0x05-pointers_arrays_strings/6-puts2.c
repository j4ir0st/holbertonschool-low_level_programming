#include <stdio.h>
/**
 * puts2 - Entry point
 * @str: char variable
 *
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != 0)
	{
		if (n % 2 == 0)
		{
			printf("%c", str[n]);
		}
		n++;
	}
	printf("\n");
}
