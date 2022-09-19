#include "main.h"
/**
 * _atoi - converts a string to an integer, truncate invalid char
 * @s: string to convert
 * Author: Idoko David Edawrd
 * Return: value of integer
 */
int _atoi(char *s)
{
	int i, tmp, j, neg;

	i = j = 0;
	neg = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			neg *= -1;
		i++;
	}
	tmp = i;
	while ((*(s + tmp) >= '0') && (*(s + tmp) <= '9'))
	{
		j = j * 10 + neg * (*(s + tmp) - '0');
		tmp++;
	}
	return (j);
}
