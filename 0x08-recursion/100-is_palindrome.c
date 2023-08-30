#include "main.h"
/**
 * length - function to check length of string
 * @s: string
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * check - check if s is palindrome.
 * @i: integer i
 * @s: string
 * Return: int value
 */
int check(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (check(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it paldindrome
 * @s: string to check
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (check(i, s));

}
