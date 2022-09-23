#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int cloudio, cmpMike;

	cloudio = 0;
	while (s1[cloudio] == s2[cloudio] && s1[cloudio] != '\0')
	{
		cloudio++;
	}
	cmpMike = s1[cloudio] - s2[cloudio];

	return (cmpMike);
}
