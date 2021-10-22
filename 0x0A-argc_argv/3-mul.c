#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - imput
 * @argc: int argument
 * @argv: char argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
