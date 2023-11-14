#include "main.h"

/**
 * print_rot13 - The Entry Point.
 * Description - The function that convert to rot13.
 * @args: The printf arguments.
 * Return: counter.
 */

int print_rot13(va_list args)
{
	int m, n, c = 0;
	int k = 0;
	char *t = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (t == NULL)
		t = "(null)";
	for (m = 0; t[m]; m++)
	{
		k = 0;
		for (n = 0; al[n] && !k; n++)
		{
			if (t[m] == al[n])
			{
				_putchar(bl[n]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(t[m]);
			c++;
		}
	}
	return (c);
}

