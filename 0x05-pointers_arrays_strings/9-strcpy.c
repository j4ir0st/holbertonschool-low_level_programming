/**
 * *_strcpy - copies the string pointed to src
 * @dest: char address argument
 * @src: char argument
 * Return: returns dest argument
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	do {
		dest[n] = src[n];
		n++;

	} while (src[n] != 0);

	return (dest);
}
