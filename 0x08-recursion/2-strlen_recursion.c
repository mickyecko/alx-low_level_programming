#include "main.h"
/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: string
 * Author: Onah
 * Return: an integer which is the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
		/* each recursion represent 1 count, return value is an int*/
	}
}
