#include "main.h"

/**
 * print_pointer - The Entry Point.
 * Description - The function that prints an hexgecimal number.
 * @val: The arguments.
 * Return: counter.
 */

int print_pointer(va_list val)
{
	void *u;
	char *k = "(nil)";
	long int x;
	int y;
	int m;

	u = va_arg(val, void*);
	if (u == NULL)
	{
		for (m = 0; k[m] != '\0'; m++)
		{
			_putchar(k[m]);
		}
		return (m);
	}

	x = (unsigned long int)u;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
