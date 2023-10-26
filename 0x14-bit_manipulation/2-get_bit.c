#include "main.h"
#include <stdio.h>

/**
 * get_bit - getting of bit
 * @n: number of the int
 * @index: number index
 * Return: the value of get_v
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_v;

	if (index > 63)
		return (-1);

	get_v = (n >> index) & 1;

	return (get_v);
}
