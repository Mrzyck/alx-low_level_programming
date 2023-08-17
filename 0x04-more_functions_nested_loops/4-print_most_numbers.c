#include "main.h"

/**
 * print_most_numbers - printing numbers
 *
 * Return: 1 (sucess)
 */

void print_most_numbers(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		if (j != '2' && j != '4')
		{
			_putchar (j);
		}
			
	}
	_putchar ('\n');
}
