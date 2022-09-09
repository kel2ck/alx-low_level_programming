#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combination of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3, digit4;

	digit1 = 48;
	while (digit1 < 58)
	{
		digit2 = 48;
		while (digit2 < 58)
		{
			digit4 = digit2 + 1;
			digit3 = digit1;
			while (digit3 < 58)
			{
				while (digit4 < 58)
				{
					putchar(digit1);
					putchar(digit2);
					putchar(32);
					putchar(digit3);
					putchar(digit4);
					if (digit1 < 57 || digit2 < 56 || digit3 < 57 || digit4 < 57)
					{
						putchar(44);
						putchar(32);
					}
					digit4++;
				}
				digit4 = 48;
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar(10);
	return (0);
}
