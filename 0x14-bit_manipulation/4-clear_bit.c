#include "main.h"

/**
 * clear_bit - This sets the value of a given bit to 0
 * @n: the pointer to the number to change
 * @index: the index of the bit to clear
 *
 * Return: for failure -1, for success 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
