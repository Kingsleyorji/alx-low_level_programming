#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Combination of numbers between 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = 0; m <= 99; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m == 98 && n == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

