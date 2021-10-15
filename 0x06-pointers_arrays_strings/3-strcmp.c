/**
 * _strcmp - compares two strings
 * @s1: char argument
 * @s2: char argument
 * Return: returns the dif of two string
 */

char _strcmp(char *s1, char *s2)
{
	int c = 0;
	int v1, v2;
	int dif = 0;

	while (s1[c] && s2[c])
	{
		v1 = s1[c];
		v2 = s2[c];
		if (v1 != v2)
		{
			dif = v1 - v2;
			break;
		}
		c++;
	}
	return (dif);
}
