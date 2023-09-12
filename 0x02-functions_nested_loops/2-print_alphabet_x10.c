#include "main.h"
/**
 * main - Prints alphabet in lowercase 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int m;
	int n;

	for (n = 1; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
