/**
 * wildcmp - compares two strings and returns 1 if identical or 0 if not
 * @s1: char argument
 * @s2: char argument
 * Return: returns 0 o 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == 42 && s1 != 0)
	{
		if (*(s2 + 6) == 'c' || *(s2 + 5) == 'c')
		{
			return (1);
		}
		return (wildcmp(s1, (s2 + 1)));
	}
	else if (*(s2 - 1) == 42 && *s1 != *s2 && *s1 != 0)
	{
		return (wildcmp((s1 + 1), s2));
	}
	else if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	else if (*s1 == *s2 && (*s1 != 0 || *s2 != 0))
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	return (0);
}
