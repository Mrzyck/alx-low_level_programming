#include "main.h"

/**
* _islower - check lowercase and
* @c: a character to be checked
* Return: 1 for lowercase character and 0 for anything else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
