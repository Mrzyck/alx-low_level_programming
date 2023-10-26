#include "main.h"

/**
 * clear_bit - clear bit
 * @n: number
 * @index: index of the number
 * description: a function that sets the value of a bit to 0 at a given index
 * Return:value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int j = index;

	if (j > 63)

		return (-1);

	*n = (~(1UL << j) & *n);

	return (1);
}
