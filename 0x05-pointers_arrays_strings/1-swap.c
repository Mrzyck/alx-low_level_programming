#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a:first integer
 * @b:second integer
 * description: a function that swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
