#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * binary_to_uint - converts a binary number to an size_t
 * @b:pointer to string to be converted to int.
 *
 * Return: unsigned it or
 * 0 if char in b is not 1 & 0 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decval = 0, result, base = 1, lastdigt;
	int i;
	char digit;

	/* check for null string */
	if (b == NULL)
		return (0);
	/* check if the char in string is a digit */
	for (i = 0; b[i] != '\0'; i++)
	{
		digit = b[i];

		if (!isdigit(digit))
			return (0);
	}
	result = atoi(b);

	while (result != 0)
	{
		/* find last digit */
		lastdigt = result % 10;
		/* remove the last digit */
		result = result / 10;
		/* convert binary to decimal */
		decval += lastdigt * base;
		/*  update */
		base += base;
	}

	return (decval);
}
