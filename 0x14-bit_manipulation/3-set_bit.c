#include "main.h"

/**
 * set_bit - At a given index to 1 sets a bit
 * @n: the pointer to the no. to change
 * @index: The index of bit to set to 1
 *
 * Return: For success 1 , For failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
