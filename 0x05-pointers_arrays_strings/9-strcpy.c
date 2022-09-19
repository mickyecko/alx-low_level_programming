#include "main.h"
/**
 * _strcpy - copies the pointer
 * @dest: array buffer that returns a pointer
 * @src: the pointer that receive the string
 * Author: Idoko David Edward
 * Return: the value pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	for  (n = 0; src[n] != '\0'; n++)
	{
		;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i <= n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
