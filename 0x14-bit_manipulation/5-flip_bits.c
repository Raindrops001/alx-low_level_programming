#include "main.h"

/**
 * flip_bits - This counts the no. of a given bits to change
 * to get from one no. to another
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: the no. of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
