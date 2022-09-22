#include "main.h"
/**
 * _puts - prints a string using putchar
 * @str: the string
 * Author: Michael Owoicho Onah
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
