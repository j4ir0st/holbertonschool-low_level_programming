/**
 * *string_toupper - reverses the content of the array
 * @s: char argument
 */

char *string_toupper(char *s)
{
	int d = 0;

	while(s[d] != '\0')
	{
		if(s[d] < 123 && s[d] > 96)
		{
			s[d] = s[d] - 32;
		}
		d++;
	}
	return (s);
}
