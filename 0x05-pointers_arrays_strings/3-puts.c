#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	int m;

	m = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		m++;
		str++;
	}
	_putchar('\n');

}
