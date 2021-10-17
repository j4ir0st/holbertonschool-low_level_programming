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
		if (c == 0 || s[c - 1] == '?' || s[c - 1] == '}')
		{
			if (s[c] < 123 && s[c] > 96)
			{
				s[c] = s[c] - 32;
			}
		}
		if (s[c - 1] < 48 && s[c - 1] != 45)
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
