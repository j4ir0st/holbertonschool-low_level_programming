#include <stdio.h>
#include <stdlib.h>

/**
 * main - imprimir hexadecimal de bytes
 * @argc: numero de argumentos
 * @argv: argumentos
 * Return: entero
 */

int main(int argc, char *argv[])
{
	int bytes, x;
	char *file = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x < bytes; x++)
	{
		printf("%02hhx", file[x]);
		if (x != bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
