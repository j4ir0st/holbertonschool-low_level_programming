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
		if (s[c - 1] == ' ' ||  s[c - 1] == '.' || s[c - 1] == ',' || s[c - 1] == ';' || s[c - 1] == '\n' || s[c - 1] == 9 || s[c - 1] == '!' || s[c - 1] == '?' || s[c - 1] == 34 || s[c - 1] == '(' || s[c - 1] == ')' || s[c - 1] == '{' || s[c - 1] == '}')
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
