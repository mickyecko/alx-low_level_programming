#include "main.h"
/**
 * puts2 - prints every other character of a string
 * by skipping the next
 * @str: the string to print
 * Author: Michael Owoicho Onah
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	for (j = 0 ; j < i ; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
