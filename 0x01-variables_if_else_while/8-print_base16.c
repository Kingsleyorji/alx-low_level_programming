#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To print numbers in hexadecimal.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m[] = "0123456789abcdef";
	int n;

	for (n = 0; n < 16; n++)
	{
		putchar(m[n]);
	}
	putchar('\n');
	return (0);
}
