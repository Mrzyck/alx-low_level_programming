#include "main.h"

/**
 * jack_bauer - It prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int x, y;

	x = 0;
	while (x < 24)
	{
		y = 0;
		while (y < 60)
		{
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			_putchar(':');
			_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
			_putchar('\n');
			y++;
		}
		x++;
	}
}
