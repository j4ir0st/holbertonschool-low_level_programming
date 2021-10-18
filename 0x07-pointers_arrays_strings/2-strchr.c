/**
 * *_strchr - locates a character in a string
 * @s: char argument as pointer
 * @c: char argument
 * Return: returns a pointer of finded char
 */

char *_strchr(char *s, char c)
{
	while (*(s))
	{
		if (*(s) == c)
		{
			break;
		}
		s++;
	}
	if (*(s) == 0)
	{
		s = 0;
	}
	return (s);
}
