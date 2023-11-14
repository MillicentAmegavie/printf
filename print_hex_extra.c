#include "main.h"

/**
 * print_hex_extra - The Entry Point.
 * Description - The function that prints an hexgecimal number.
 * @num: The arguments.
 * Return: counter.
 */

int print_hex_extra(unsigned long int num)
{
	long int m;
	long int *a;
	long int c = 0;
	unsigned long int t = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(long int));

	for (m = 0; m < c; m++)
	{
		a[m] = t % 16;
		t = t / 16;
	}
	for (m = c - 1; m >= 0; m--)
	{
		if (a[m] > 9)
			a[m] = a[m] + 39;
		_putchar(a[m] + '0');
	}
	free(a);
	return (c);
}
