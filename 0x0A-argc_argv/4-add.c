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
	int c;
	int sum = 0;

	for (c = 1; c < argc; c++)
	{
		if (atoi(argv[c]) >= 0 && (*argv[c] > 47 && *argv[c] < 58))
		{
			sum = sum + atoi(argv[c]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);

	return (0);
}
