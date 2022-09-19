#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer first number
 * @b: integer second number
 * Return: void
 * Author: Idoko David Edward
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
