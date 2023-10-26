#include "main.h"
#include <string.h>

/**
 * binary_to_uint - conversion of binary to unsigned int
 * @b: pointer to the string of binary
 * Return: return the bit converted
 */

unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;
	int length = strlen(b), j;
	int base = 1;

	if (b == NULL)
		return ((size_t)(NULL));
	for (j = length - 1; j >= 0; j--)
	{
		if (b[j] == '0' || b[j] == '1')
		{
			if (b[j] == '1')
				decimal += base; /** decimal = 1 + 4**/
			base *= 2; /** 8**/
		}
		else
		{
			return (0);
		}
	}
	return (decimal);
}
