#include <stdio.h>

/**
 * main - program that prints either number
 * or fizz or buzz or fizzbuzz
 * Return: 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("%s", "FizzBuzz");
}
else if (i % 3 == 0)
{
printf("%s", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
