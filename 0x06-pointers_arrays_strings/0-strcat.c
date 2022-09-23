#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int mike, j;

	mike = 0;
	while (dest[mike] != '\0')
	{
		mike++;
	}
	for (j = 0; src[j] != '\0'; j++, mike++)
	{
		dest[mike] = src[j];
	}
	dest[mike] = '\0';
	return (dest);

}
