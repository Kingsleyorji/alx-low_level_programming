#include "main.h"
#include "_putchar.c"
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
