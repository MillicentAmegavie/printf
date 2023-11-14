#include "main.h"

/**
 * print_exc_string - The Entry Point.
 * Description - The function that print exclusuives string.
 * @val: The parameter.
 * Return: integer.
 */

int print_exc_string(va_list val)
{
	char *b;
	int m, l = 0;
	int v;

	b = va_arg(val, char *);
	if (b == NULL)
		b = "(null)";
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] < 32 || b[m] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			v = b[m];
			if (v < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + print_HEX_extra(v);
		}
		else
		{
			_putchar(b[m]);
			l++;
		}
	}
	return (l);
}
