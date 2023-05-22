#include <stdio.h>
#include "main.h"

/**
 * _isupper - checkes for uppercase characters
 * @c: character in question
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
