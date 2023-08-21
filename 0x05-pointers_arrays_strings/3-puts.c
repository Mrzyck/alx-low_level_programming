#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str:string
 * description:a function that prints a string
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0') /* Iterate through the string */
	{
		_putchar(*str);  /* Print the current character */
		str++; /*  Move to the next character */
	}
	_putchar('\n'); /* Print a new line after the string */
}
