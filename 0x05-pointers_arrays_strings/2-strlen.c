#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns string length
 * @s:string
 * description:a function that returns the length of a string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
