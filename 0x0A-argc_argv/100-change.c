#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _change(int cents);

/**
 * main - input
 * @argc: int argument
 * @argv: char argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int d, c = 0;
	int cents;

	if (argc == 2)
	{
		for (d = 0; argv[1][d]; d++)
		{
			if ((argv[1][d] < 48 || argv[1][d] > 57) && argv[1][0] != 45)
			{
				printf("Error\n");
				return (1);
			}
		}
		cents = atoi(argv[1]);
		c = _change(cents);
		printf("%i\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
/**
 * _change - imput
 * @cents: int argument
 * Return: returns cents
 */
int _change(int cents)
{
	int c = 0;

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
	return (c);
}
