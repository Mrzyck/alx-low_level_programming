#include "main.h"

/**
 * flip_bits - function for flipping numbers of bits
 * @n: first number 1
 * @m: second number 2
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, next = 0;
	unsigned long int tin, pre = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		tin = pre >> j;
		if (tin & 1)
			next++;
	}
	return (next);
}
