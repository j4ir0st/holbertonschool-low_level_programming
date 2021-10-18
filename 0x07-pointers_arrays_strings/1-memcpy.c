/**
 * *_memcpy - fills memory with a constant byte
 * @dest: char argument as destiny
 * @src: char argument as source
 * @n: unsigned int argument
 * Return: Returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
