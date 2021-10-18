/**
 * *_memset - fills memory with a constant byte
 * @s: char argument as pointer
 * @b: char argument
 * @n: int argument
 * Return: Returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
