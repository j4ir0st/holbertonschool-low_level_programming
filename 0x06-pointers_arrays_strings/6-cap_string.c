/**
 * *cap_string - reverses the content of the array
 * @s: char argument
 * Return: returns s
 */

char *cap_string(char *s)
{
	int c = 0;

	while (s[c])
	{
		if (c == 0)
		{
			if (s[0] < 123 && s[0] > 96)
			{
				s[0] = s[0] - 32;
			}
		}
		else if (s[c - 1] < 48 || s[c - 1] == 63 || s[c - 1] == 125)
		{
			if (s[c] < 123 && s[c] > 96)
			{
				s[c] = s[c] - 32;
			}
		}
		c++;
	}
	return (s);
}
