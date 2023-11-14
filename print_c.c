#include "main.h"

/**
 * print_c - The Entry Point.
 * Description - The function that prints characters.
 * @val: A va_list containing the character to be printed..
 * Return: 1.
 */

int print_c(va_list val)
{
	char m;

	m = va_arg(val, int);
	_putchar(m);
	return (1);
}
