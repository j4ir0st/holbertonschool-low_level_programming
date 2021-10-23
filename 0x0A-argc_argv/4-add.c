#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - imput
 * @argc: int argument
 * @argv: char argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int c, d;
	int sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d]; d++)
		{
			if (argv[c][d] > 47 && argv[c][d] < 58)
			{}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[c]);
	}
	printf("%i\n", sum);

	return (0);
}
