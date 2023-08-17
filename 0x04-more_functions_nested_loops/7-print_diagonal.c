#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number  of times the diagonal line to be printed
 *
 */

void print_diagonal(int n)
{
	int k;
	int l;

	if (n <= 0)
	{
		_putchar ('\n');
	}else
	{
		for (k = 0; k < n; k++)
		{
			for (l = 0; l< k; l++)
			{
			_putchar (' ');
			}
		_putchar ('\\');
		_putchar ('\n');
		}
	}	
	
}
