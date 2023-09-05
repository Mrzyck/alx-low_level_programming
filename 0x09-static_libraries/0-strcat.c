#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: Pointer
 */

char *_strcat(char *dest, char *src)

{
	/* Find the end of the destination string */
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Copy characters from src to the end of dest */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* Add a terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
