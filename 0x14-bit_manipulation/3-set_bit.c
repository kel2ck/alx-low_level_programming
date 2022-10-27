#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
