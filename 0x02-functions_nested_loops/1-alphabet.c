#include "main.h"
/**
 * Prints_alphabet - To print alphabets in lowercase, stop 
 * when at z'
 *
 * Return: All lowercase alphabet
 */
void print_alphabet(void)
{
	char c = 'a';

	while ( c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
