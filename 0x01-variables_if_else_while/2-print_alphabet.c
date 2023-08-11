#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
