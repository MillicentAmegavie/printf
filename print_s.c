#include "main.h"

/**
 * print_s - The Entry Point.
 * Description - The function that prints a string.
 * @val: The argument.
 * Return: the length of the string.
 */

int print_s(va_list val)
{
	char *m;
	int n;
	int l;

	m = va_arg(val, char *);
	if (m == NULL)
	{
		m = "(null)";
		l = _strlen(m);
		for (n = 0; n < l; n++)
			_putchar(m[n]);
		return (l);
	}
	else
	{
		l = _strlen(m);
		for (n = 0; n < l; n++)
			_putchar(m[n]);
		return (l);
	}
}

