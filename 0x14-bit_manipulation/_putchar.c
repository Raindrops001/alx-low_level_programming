#include "main.h"
#include <unistd.h>
/**
 * _putchar - This writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success.
 * -1 is returned, and errno is set appropriately, On error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
