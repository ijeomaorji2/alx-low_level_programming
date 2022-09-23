#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @z: string
 * Return: 0
 */

char *string_toupper(char *z)
{
	int cloudio;

	cloudio = 0;
	while (z[cloudio] != '\0')
	{
		if (z[cloudio] >= 97 && z[cloudio] <= 122)
		{
			z[cloudio] = z[cloudio] - 32;
		}
		cloudio++;

	}
	return (z);

}
