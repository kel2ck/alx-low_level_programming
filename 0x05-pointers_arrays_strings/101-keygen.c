#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid password
 * Return: Always 0
 */

int main(void)
{
	char password[84];
	int num = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[num] = 33 + rand() % 94;
		sum += password[num++];
	}

	password[num] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (num = 0; password[num]; num++)
		{
			if (password[num] >= (33 + diff_half1));
			{
				password[num] -= diff_half1;
				break;
			}
		}
		for (num = 0; password[num]; num++)
		{
			if (password[num] >= (33 + diff_half2))
			{
				password[num] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);

}
