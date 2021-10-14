#include <stdio.h>
/**
 * puts2 - Entry point
 * @str: char variable
 *
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n + 2)
	{
		printf("%c", str[n]);
	}
	printf("\n");
}
