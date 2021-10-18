/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: char argument as pointer
 * @accept: char argument
 * Return: return pointer s
 */
char *_strpbrk(char *s, char *accept)
{
	int c = 0;

	while (*(s))
	{
		while (accept[c])
		{
			if (*(s) == accept[c])
			{
				break;
			}
			c++;
		}
		if (*(s) == accept[c])
		{
			break;
		}
		c = 0;
		s++;
	}
	if (*(s) == 0 && accept != 0)
	{
		s = 0;
	}
	return (s);
}
