#include "main.h"

/**
 * potenciaConWhile - eleva a la potencia
 * @numero: numero a elevar
 * @potencia: potencia a elevar
 * Return: resultado as Integer
 */

long potenciaConWhile(unsigned int numero, unsigned int potencia)
{
	unsigned int resultado = numero;

	if (potencia == 0)
	{
		return (1);
	}
	while (potencia > 1)
	{
		resultado = resultado * numero;
		potencia--;
	}
	return (resultado);
}

/**
 * binary_to_uint - converts binary to int
 * @b: binary as char
 * Return: Integer
 */

unsigned int binary_to_uint(const char *b)
{
	int c = 0, i = 0;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	c = strlen(b) - 1;
	while (c >= 0)
	{
		switch (*(b + c))
		{
		case '1':
			n = n + potenciaConWhile(2, i);
			i++;
			break;
		case '0':
			i++;
			break;
		default:
			return (0);
		}
		c--;
	}
	return (n);
}
