#include "main.h"

/**
 * _strlen - The Entry Point.
 * Description the function that returns the length of a string.
 * @str: The string.
 * Return: .
 */

int _strlen(char *str)
{
	int m;

	for (m = 0; str[m] != 0; m++)
		;
	return (m);

}

/**
 * _strlenc - The Entry Poiint.
 * Description - The function that finds length of a string but
 * for constant characters.
 * @str: The string.
 * Return: .
 */

int _strlenc(const char *str)
{
	int m;

	for (m = 0; str[m] != 0; m++)
		;
	return (m);
}

