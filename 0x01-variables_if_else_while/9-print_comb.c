#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To print the combination of single num.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		for (j = 0; j <= 9; j++)
		{
			putchar(',');
			putchar(' ');
			putchar(j + '0');
		}
		putchar('\n');
	}
	return (0);
}
