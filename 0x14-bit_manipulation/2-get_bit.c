#include "main.h"

/**
 * get_bit - This returns the values of a bit at an index in a decimal no.
 * @n: the no/ to search
 * @index: The index of the bit
 *
 * Return: The values of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)

		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
