#include "main.h"

/**
 * print_HEX_extra - The Entry Point.
 * Description - The function that prints an hexgecimal number.
 * @num: The number to print.
 * Return: counter.
 */

int print_HEX_extra(unsigned int num)
{
	int m;
	int *a;
	int c = 0;
	unsigned int t = num;

	while (num / 16 != 0)
	{
		num /= 16;
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

