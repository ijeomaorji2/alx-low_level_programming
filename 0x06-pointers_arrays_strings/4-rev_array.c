#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: element
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int mike, cloudio;

	n = n - 1;
	cloudio = 0;
	while (cloudio <= n)
	{
		mike = a[cloudio];
		a[cloudio++] = a[n];
		a[n--] = mike;
	}
}
