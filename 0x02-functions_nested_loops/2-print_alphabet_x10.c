#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Print all alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
	}
}
