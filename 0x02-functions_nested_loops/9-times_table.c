#include "main.h"

/**
 * times_table - Check description.
 * Description: it prints 9 times table starting with 0.
 * Return: Nothing
 */
void times_table(void)
{
	int n, m, o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			o = n * m;
			if ((o / 10) == 0)
			{
				if (m != 0)
					_putchar(" ");
			_putchar(o + '0');

			if (m == 9)
				continue;
			_putchar(",");
			_putchar(" ");
		}
		else
		{
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
			if (m == 9)
				continue;
			_putchar(",");
			_putchar(" ");
		}
		}
		_putchar('\n');
	}
}
