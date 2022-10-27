#include "main.h"

/**
 * clear_bit - clear the bit at a given index
 * @n: number to check
 * @index: index to clear
 * Return: bit value or -1;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
