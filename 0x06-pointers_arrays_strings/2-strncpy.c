#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);

}
