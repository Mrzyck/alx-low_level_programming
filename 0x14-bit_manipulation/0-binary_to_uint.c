#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - conversion of binary to unsigned int
 * @b: pointer to the string of binary
 * Return: return the bit converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int adder = 0;

	result = 0;

	if (b == NULL)
		return (0);
	while (b[adder] != '\0')
	{
		if (b[adder] != '0' && b[adder] != '1')
			return (0);

		result = result * 2 + (b[adder] - '0');
		adder++;
	}
	return (result);
}
