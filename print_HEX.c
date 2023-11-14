#include "main.h"

/**
 * print_HEX - The Entry Point.
 * Description - The function that prints an hexgecimal number.
 * @val: The arguments.
 * Return: counter.
 */

int print_HEX(va_list val)
{
	int m;
	int *a;
	int c = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(int));

	for (m = 0; m < c; m++)
	{
		a[m] = t % 16;
		t /= 16;
	}
	for (m = c - 1; m >= 0; m--)
	{
		if (a[m] > 9)
			a[m] = a[m] + 7;
		_putchar(a[m] + '0');
	}
	free(a);
	return (c);
}
