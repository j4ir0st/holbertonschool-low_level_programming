int _strlen(char *s);
int comparar(char *inicio, char *fin);

/**
 * is_palindrome - returns 1 if a string is palindrome and 0 if not
 * @s: char argument
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (comparar(s, s + (len - 1)));
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_strlen(s)));
}

/**
 * comparar - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int comparar(char *inicio, char *fin)
{

	if (inicio >= fin)
	{
		return (1);
	}
	if (*inicio == *fin)
	{
		return (comparar(inicio + 1, fin - 1));
	}
	return (0);
}
