#include "main.h"

/**
 * print_bin - The Entry Point.
 * Description - The function that prints binary number.
 * @val: The parameter.
 * Return: integer.
 */

int print_bin(va_list val)
{
	int f = 0;
	int c = 0;
	int m, a = 1, d;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int w;

	for (m = 0; m < 32; m++)
	{
		w = ((a << (31 - m)) & num);
		if (w >> (31 - m))
			f = 1;
		if (f)
		{
			d = w >> (31 - m);
			_putchar(d + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
