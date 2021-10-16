/**
 * reverse_array - reverses the content of the array
 * @a: int argument
 * @n: int argument
 */

void reverse_array(int *a, int n)
{
	int a2[400];
	int c = 0;

	while (c < n)
	{
		a2[c] = a[c];
		c++;
	}

	for (c = 0; n >= 0 ; c++)
	{
		a[c] = a2[n-1];
		n--;
	}
	a[c] = '\0';
}
