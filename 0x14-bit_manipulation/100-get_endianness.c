#include "main.h"

/**
 * get_endianness - This checks if the machine is little or big endian
 * Return: For big 0 , For little 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
