#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int k;
	unsigned int result = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				result++;
				break;
			}
		}
		if (s[k] == '\0')
			return (result);
	}
	return (result);
}
