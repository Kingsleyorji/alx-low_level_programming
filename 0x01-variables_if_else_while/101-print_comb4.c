#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - to display the combination of three numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int m, n, l;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (l = n + 1; l <= '9'; l++)
			{
				if ((n != m) != l)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (m == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
