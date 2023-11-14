#include "main.h"

/**
 * print_revs - The Entry Point.
 * Description - function that prints a str in reverse.
 * @args: type struct va_arg where is allocated printf arguments.
 * Return: the string.
 */

int print_revs(va_list args)
{

	char *t = va_arg(args, char*);
	int m;
	int n = 0;

	if (t == NULL)
		t = "(null)";
	while (t[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m--)
		_putchar(t[m]);
	return (n);
}
