/**
 * _pow_recursion - returns the x raised to power of y using recursion
 * @x: int argument
 * @y: int argument
 * Return: -1 if y < 0, 1 if y = 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
