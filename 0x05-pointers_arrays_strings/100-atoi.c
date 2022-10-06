#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to string.
 * Return: 0
 */

int _atoi(char *s)
{
	int index, ind2;
	unsigned int res;
	int sign = 1;
	char mike;

	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		mike = *(s + index);
		if (mike == '-')
		{
			sign *= -1;
		}
		if (mike >= '0' && mike <= '9')
		{
			ind2 = index;
			while (*(s + ind2) > 47 && *(s + ind2) < 58)
			{
				res = (res * 10) + *(s + ind2) - '0';
				ind2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
