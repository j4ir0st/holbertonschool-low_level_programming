/**
 * _strspn - gets the length of a prefix substring
 * @s: char argument as pointer
 * @accept: char argument
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, c = 0;
	unsigned int r = 0;

	while (((s[a] > 96) && (s[a] < 123)) || ((s[a] > 64) && (s[a] < 91)))
	{
		while (accept[c])
		{
			if (s[a] == accept[c])
			{
				r++;
				break;
			}
			c++;
		}
		c = 0;
		a++;
	}
	return (r);
}
