#include "main.h"

/**
 * set_bit - number to set the bit
 * @n: pointer
 * @index: index of the number
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int j = index;

	if (j > 63)
		return (-1);

			*n = ((1UL << j) | *n);
	return (1);
}
