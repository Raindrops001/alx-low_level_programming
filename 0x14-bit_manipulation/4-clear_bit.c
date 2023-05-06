#include "main.h"

/**
 * clear_bit - This sets the value of a given bit equal to 0
 * @n: The pointer to the no. to change
 * @index: the index of the bit to be cleared
 *
 * Return: For success 1 , For failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
