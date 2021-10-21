/**
 * factorial - return the factorial of given number using recursive
 * @n: int argument
 * Return: returns the factorial or -1 on negative numbers
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
