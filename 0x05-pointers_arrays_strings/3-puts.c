#include <stdio.h>
/**
 * _puts - Entry point
 * @str: char variable
 *
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
	{
		printf("%c", str[n]);
	}
	printf("\n");
}
