#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display letter a to z.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
