#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function to print every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
}
