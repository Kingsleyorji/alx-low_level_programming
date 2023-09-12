#include "main.h"
/**
 * main - Prints alphabet in lowercase 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
