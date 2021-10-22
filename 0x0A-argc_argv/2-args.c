#include <stdio.h>

/**
 * main - imput
 * @argc: int argument
 * @argv: char argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int c;

	if (argc != 0)
	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}
	return (0);
}
