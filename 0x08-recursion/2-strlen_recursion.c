/**
 * _strlen_recursion - returns the lenght of a string using recursion
 * @s: char argument
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == 0)
	{
		return (0);
	}
	s++;
	len++;
	return (len + _strlen_recursion(s));
}
