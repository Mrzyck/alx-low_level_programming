#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: character to be checked
 * Return: 1 is the char is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
