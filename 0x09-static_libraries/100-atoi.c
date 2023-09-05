#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;      /* Initialize index variable. */
	d = 0;      /* Initialize variable to count minus signs encountered. */
	n = 0;      /* Initialize variable to store the converted integer. */
	len = 0;    /* Initialize variable to store the length of the string. */
	f = 0;      /* Initialize flag to track if a digit has been found. */
	digit = 0;  /* Initialize variable to store the current digit's value. */

	/* Calculate the length of the input string. */
	while (s[len] != '\0')
		len++;

	/* Loop through the string until a digit is found or the end is reached. */
	while (i < len && f == 0)
	{
		if (s[i] == '-')   /* If a minus sign is encountered. */
			++d;           /* Increment the minus sign counter. */

		if (s[i] >= '0' && s[i] <= '9')  /* If the character is a digit. */
		{
			digit = s[i] - '0';        /* Convert the character to integer. */
			if (d % 2)       /* If there are an odd number of minus signs. */
				digit = -digit;          /* Make the digit negative. */
			n = n * 10 + digit;          /* Update the converted integer. */
			f = 1;   /* Set the flag to indicate a digit was found. */

			/* If the next character is not a digit, break the loop. */
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;               /* Reset the flag for the next iteration. */
		}
		i++;                             /* Move to the next character. */
	}

	/* If no digit was found, return 0. */
	if (f == 0)
		return (0);

	return (n);                          /* Return the converted integer. */
}
