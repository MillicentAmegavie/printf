#include "main.h"

/**
 * printf_char - The Entry Point.
 * Description - The function that prints characters.
 * @val - The arguments.
 * Return: 1.
 */

int print_c(va_list val)
{
	char m;

	m = va_arg(val, int);
	_putchar(m);
	return(1);
}
