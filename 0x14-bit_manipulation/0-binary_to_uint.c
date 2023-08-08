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
	unsigned int result = 0;
	int len, i;

	/* initialize len with strlen of b */
	len = strlen(b);
	/* check if string is NULL */
	if (b == NULL)
		return (0);
	/* iterate the string and covert it to decimal */
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result |= (1 << (len - 1 - i));
		else if (b[i] != '0')
			return (0);
	}

	return (result);
}
