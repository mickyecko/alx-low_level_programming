#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string pointer to be reversed
 * Author: Idoko David Edward
 * Returns: void.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp[1000];

	while (*(s + i))
	{
		*(tmp + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(tmp + j);
		j++;
		i--;
	}
}
