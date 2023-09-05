#include "main.h"
#include <string.h>

/**
 * _strcpy - a function that copies he string pointed to by src
 * including the terminating null byte (\0) to the buffer pointed to by dest
 * @dest: pointer
 * @src: pointer
 * Return: value to pointer
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
