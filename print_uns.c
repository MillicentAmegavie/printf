#include "main.h"

/**
 * print_unsigned - The Entry Point.
 * DEscription - The function that prints integer.
 * @args: The argument to print.
 * Return: integer.
 */

int print_unsigned(va_list args)
{
        unsigned int m = va_arg(args, unsigned int);
        int num, last = m % 10, d, e = 1;
        int  a = 1;

        m = m / 10;
        num = m;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                m = -m;
                last = -last;
                a++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        e = e * 10;
                        num = num / 10;
                }
                num = m;
                while (e > 0)
                {
                        d = num / e;
                        _putchar(d + '0');
                        num = num - (d * e);
                        e = e / 10;
                        a++;
                }
        }
        _putchar(last + '0');

        return (a);
}
