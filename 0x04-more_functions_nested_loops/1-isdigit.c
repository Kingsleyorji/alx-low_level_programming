#include "main.h"

/**
 * _isdigit - Checks for zero through 9.
 *
 * @c: To print 1 or zero.
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
