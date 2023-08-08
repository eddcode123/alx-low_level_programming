#include "main.h"

/**
 * binary_to_uint - converts a binary number to an size_t
 * @b:pointer to string to be converted to int.
 *
 * Return: unsigned it or
 * 0 if char in b is not 1 & 0 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
