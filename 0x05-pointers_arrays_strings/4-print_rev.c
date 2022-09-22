#include "main.h"
/**
 * print_rev -prints a string in reverse via putchar
 * @s: a string to print in reverse
 * Author: Michael Owoicho Onah
 * Return: a void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
