#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **dptr, *ptr;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	dptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (dptr == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				ptr = (char *) malloc(sizeof(char) * (c + 1));
				if (ptr == NULL)
					return (NULL);
				while (start < end)
					*ptr++ = str[start++];
				*ptr = '\0';
				dptr[b] = ptr - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	dptr[b] = NULL;

	return (dptr);
}

