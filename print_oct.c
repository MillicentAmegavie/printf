#include "main.h"

/**
 * print_oct - The Entry Point.
 * Description - The function that prints an octal number.
 * @val: The arguments.
 * Return: counter.
 */

int print_oct(va_list val)
{
	int m;
	int *a;
	int c = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / 8 != 0)
	{
		n /= 8;
		c++;
	}
	c++;
	a = malloc(c * sizeof(int));

	for (m = 0; m < c; m++)
	{
		a[m] = t % 8;
		t /= 8;
	}
	for (m = c - 1; m >= 0; m--)
	{
		_putchar(a[m] + '0');
	}
	free(a);
	return (c);
}

