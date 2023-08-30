#include "main.h"
/**
 * _strlen_recursion - function to print the length of string
 * @s:string
 * Description:Write a function that returns the length of a string.
 * Return:int
 */

/* Func to calculate the len of a strng using recursion */
int _strlen_recursion(char *s)
{
	int i = 0;/* initialize a counter to keep track of length*/

	if (*s)/*checks if the current char is not the null terminator*/
	{
		i++;/*increment counter for the current char*/
		i += _strlen_recursion(s + 1);
	}
	return (i);/* Return the total length of the string */
}
