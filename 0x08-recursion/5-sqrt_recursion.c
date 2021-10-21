int _raiz(int n, int raiz);
/**
 * _sqrt_recursion - returns the natural square root of a given number
 * @n: int argument
 * Return: returns -1 on error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_raiz(n, 0));
}

int _raiz(int n, int raiz)
{
	if (raiz * raiz > n)
	{
		return (-1);
	}
	else if (raiz * raiz == n)
	{
		return (raiz);
	}
	return (_raiz(n, raiz + 1));
}
