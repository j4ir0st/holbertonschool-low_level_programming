/**
 * *_strstr - locates a substring
 * @haystack: char argument as pointer
 * @needle: char argument
 * Return: returns haystack pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int c = 0;

	if (needle != 0 && haystack != 0)
	{
		while (*(haystack))
		{
			while (needle[c])
			{
				if (*(haystack + c) == needle[c])
				{
					c++;
				}
				else
				{
					break;
				}
			}
			if (*(haystack + c) == needle[c])
			{
				break;
			}
			c = 0;
			haystack++;
		}
		if (*(haystack) == 0 && needle != 0)
		{
			haystack = 0;
		}
	}
	return (haystack);
}
