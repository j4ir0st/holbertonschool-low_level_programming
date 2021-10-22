#include <stdio.h>

/**
 * main - imput
 * @argc: int argument
 * @argv: char argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (*argv != 0)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
