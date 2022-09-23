#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes to be used
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int mike, j;

	mike = 0;
	while (dest[mike] != '\0')
	{
		mike++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, mike++)
	{
		dest[mike] = src[j];
	}
	dest[mike] = '\0';
	return (dest);
}
