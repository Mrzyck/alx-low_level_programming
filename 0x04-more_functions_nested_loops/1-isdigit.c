#include "main.h"

/**
 * _isdigit - to check for digit
 *
 * @c: character to determine
 *
 * Return: 1 or 0 (1 means sucess)
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
