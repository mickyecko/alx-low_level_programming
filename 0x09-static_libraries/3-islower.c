#include "main.h"

/**
 * _islower -  checks for lowercase character and return 1 if lower or 0
 * @c:init
 * Return: 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
