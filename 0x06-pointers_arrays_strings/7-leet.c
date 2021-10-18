/**
 * *leet - turns a string into 1337
 * @s: char argument
 * Return: Returns s
 */

char *leet(char *s)
{
	int c, a;
	char r1[] = "aAeEoOtTlL";
	char r2[] = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (a = 0; r1[a] != '\0'; a++)
		{
			if (s[c] == r1[a])
			{
				s[c] = r2[a];
			}
		}
	}
	return (s);
}
