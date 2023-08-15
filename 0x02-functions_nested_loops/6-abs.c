#include "main.h"

/**
* _abs - computes the absolute value of the ingeret
* @c: The number to be computed.
* Return: Absolute value of the number or zero
*/

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
