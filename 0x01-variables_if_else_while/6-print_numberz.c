#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int num = 0;

	for (; num < 10 ; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
