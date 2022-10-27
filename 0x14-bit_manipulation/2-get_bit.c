#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGHT)
		return (-1);

	return ((n >> index) & 1);
}
