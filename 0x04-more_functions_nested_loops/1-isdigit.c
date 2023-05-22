#include "main.h"

/**
 * _isdigit - checks for base 10 numbers
 * @c: number to be checked
 *
 * Return: 1 if 0-9 and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
