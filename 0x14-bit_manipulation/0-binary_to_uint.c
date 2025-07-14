#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int value
 * @b: pointer to binary value
 *
 * Return: unsigned int value or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		value = value * 2 + (b[i] - '0');
	}

	return (value);
}
