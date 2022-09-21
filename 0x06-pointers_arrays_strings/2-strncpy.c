#include "main.h"
/**
 * _strncpy - copies the string
 * @dest: array that returns copied string
 * @src: the pointer to be copied
 * @n: times to interate
 * Author: Michael Owoicho Onah
 * Return: the parameter dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
