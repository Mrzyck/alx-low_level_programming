#include "main.h"

/**
 * _print_rev_recursion - Function that print a string in reverse
 * @s:string
 * Description:Write a function that prints a string in reverse.
 * Return:void
 */

void _print_rev_recursion(char *s)/*Fun to print a string in rvrse using recr*/
{
	/*Check if the current character is not the null terminator*/
	if (*s)
	{
		/*Make a recursive call to process the next character*/
		_print_rev_recursion(s + 1);
		/* Print the current character */
		_putchar(*s);
	}
}
