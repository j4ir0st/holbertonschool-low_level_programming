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
	int d, c = 1;
	int cents;

	if (argc == 2)
	{
		for (d = 0; argv[c][d]; d++)
		{
			if (argv[c][d] < 48 || argv[c][d] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		cents = atoi(argv[c]);
		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents = cents - 25;
				c++;
			}
			else if (cents >= 10)
			{
				cents = cents - 10;
				c++;
			}
			else if (cents >= 5)
			{
				cents = cents - 5;
				c++;
			}
			else if (cents >= 2)
			{
				cents = cents - 2;
				c++;
			}
			else if (cents >= 1)
			{
				cents = cents - 1;
				c++;
			}
		}
		printf("%i\n", c - 1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
