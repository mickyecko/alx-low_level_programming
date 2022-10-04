#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: parameter string
 * @src: parameter string
 * Author: Michael Owoicho Onah
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_size, i;

	dest_size = i = 0;
	while (*(dest + dest_size))
	{
		dest_size++;
	}
	while ((*(dest + dest_size) = *(src + i)))
	{
		dest_size++;
		i++;
	}
	return (dest);
}
