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
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
			if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
