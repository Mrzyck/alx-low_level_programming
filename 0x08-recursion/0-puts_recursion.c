#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s:string
 * Description:Write a function that prints a string, followed by a new line.
 * Return:void
 */

void _puts_recursion(char *s)/* Func to print a string followed by a new line*/
{
	if (*s == '\0') /* Check if the current character is the null terminator */
	{
		_putchar('\n'); /*If it's, prints a new line */
	}
	else
	{
		_putchar(*s); /* Print the current character */
		_puts_recursion(s + 1); /*Make a recrsve call to print the next char */
	}
}
