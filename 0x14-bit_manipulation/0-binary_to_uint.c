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
	unsigned int i, len;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	{

	}

	for (i = 0; len > 0; i++, len--)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
		{
			return (0);
		}
		if (b[len - 1] == '1')
		{
			value += (1 << i);
		}
	}
	return (value);
}
