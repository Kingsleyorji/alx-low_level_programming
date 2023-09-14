#include <stdio.h>

/**
 * positive_or_negative - To print the possible outcome of i.
 *
 * @i: If the number is positive, negative or zero
 *
 * Return: i
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
