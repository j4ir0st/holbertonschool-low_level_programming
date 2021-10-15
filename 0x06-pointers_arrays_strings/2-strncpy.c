/**
 * *_strncpy - Entry point
 * @dest: destination char argument
 * @src: source char argument
 * @n: int argument
 * Return: Destination (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != src[n] && src[n] != '\0')
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
