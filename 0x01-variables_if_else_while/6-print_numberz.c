#include <stdio.h>

/**
 * main -  To print numbers in base 10.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
