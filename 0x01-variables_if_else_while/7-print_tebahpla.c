#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To print a to z, backwards.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
