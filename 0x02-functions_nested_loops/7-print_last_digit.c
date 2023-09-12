#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * ofa number.
 *
 * @n: Input number as an integer.
 *
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
