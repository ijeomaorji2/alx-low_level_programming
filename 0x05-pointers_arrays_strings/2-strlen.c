#include "main.h"
#include <stdio.h>

/**
 * _strlen -  function that returns the length of a string.
 * @s: char string
 * Return: 0
 */

int _strlen(char *s)
{
	int m;

	 m = 0;
	while (*s != '\0')
	{
		m++;
		s++;
	}
	return (m);

}
