#include "main.h"

/**
 * _printf - The Entry Point.
 * Description = is a function that selects the correct function to print.
 * @format: The identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int m = 0, n, l = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[m] != '\0')
	{
		n = 13;
		while (n >= 0)
		{
			if (p[n].ph[0] == format[m] && p[n].ph[1] == format[m + 1])
			{
				l = l + p[n].function(args);
				m = m + 2;
				goto Here;
			}
			n--;
		}
		_putchar(format[m]);
		l++;
		m++;
	}
	va_end(args);
	return (l);
}
