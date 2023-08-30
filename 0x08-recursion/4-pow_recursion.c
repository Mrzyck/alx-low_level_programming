#include "main.h"
/**
 * _pow_recursion - a funct that returns the value of x raised to the pwr of y.
 * @x:int
 * @y:int
 * DEscription: Write a funct that rtrns the value of x raised to the pwr of y.
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
