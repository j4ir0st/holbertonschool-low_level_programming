/**
 * *rot13 - rotates a string 13 spaces
 * @s: char argument
 * Return: Returns s
 */

char *rot13(char *s)
{
	int c, a = 0;
	char r1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char r2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (c = 0; s[c] != '\0'; c++)
	{
		while (r1[a] != '\0')
		{
			if (s[c] == r1[a])
			{
				s[c] = r2[a];
				break;
			}
			a++;
		}
		a = 0;
	}
	return (s);
}
