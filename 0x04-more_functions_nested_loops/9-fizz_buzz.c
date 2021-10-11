#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;

	printf("%i", n);
	n = 2;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %i", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
