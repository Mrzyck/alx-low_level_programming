 #include "main.h"

/**
 * get_endianness - get end
 * Return: pointer
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *v = (char *) &j;

	return (*v);
}
