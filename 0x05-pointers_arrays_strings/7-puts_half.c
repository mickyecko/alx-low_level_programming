#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to print half
 * Author: Idoko David Edward
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int tmp;

	for (n = 1; str[n] != '\0'; n++)
	{
		;
	}
	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = (n + 1) / 2;
	}
	while (str[n] != '\0')
	{
		tmp = str[n];
		n++;
		_putchar(tmp);
	}
	_putchar('\n');
}
