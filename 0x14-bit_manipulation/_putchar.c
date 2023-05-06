#include "main.h"
#include <unistd.h>
/**
 * _putchar -This writes the char c to stdout
 * @c: the char to print
 *
 * Return: 1 on success
 * On error, Error is set appropriately, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
