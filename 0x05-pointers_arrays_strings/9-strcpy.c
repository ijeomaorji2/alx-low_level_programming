#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * @dest: pointer to string to be copied to.
 * @src: pointer to string to be copied.
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
