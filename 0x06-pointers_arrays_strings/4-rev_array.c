/**
* reverse_array - reverse array elements
* @a: array
* @n: number of elements in array
*/

void reverse_array(int *a, int n)
{

	int tmp, i = 0;
	int f = n - 1;

	while (i < f)
	{
		tmp = *(a + i);
		*(a + i) = *(a + f);
		*(a + f) = tmp;
		i++, f--;
	}
}
