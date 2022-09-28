#include "main.h"
/**
 * _puts_recursion - Prints a string recursively
 * @s: string
 * Author: Onah
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
