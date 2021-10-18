/**
 * *leet - reverses the content of the array
 * @s: char argument
 */

char *leet(char *s)
{
	int c = 0;

	while (s[c])
	{
		if (s[c] == 'a' || s[c] == 'A')
		{
			s[c] = '4';
		}
		else if (s[c] == 'e' || s[c] == 'E')
		{
			s[c] = '3';
		}
		else if (s[c] == 'o' || s[c] == 'O')
		{
			s[c] = '0';
		}
		else if (s[c] == 't' || s[c] == 'T')
		{
			s[c] = '7';
		}
		else if (s[c] == 'l' || s[c] == 'L')
		{
			s[c] = '1';
		}
		c++;
	}
	return (s);
}
