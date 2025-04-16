#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the first character of the string.
 *
 * Return: The integer value of the string, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Default to positive */
	bool set = false;

	while (*s != '\0')
	{
		/* Check for sign */
		if (*s == '-' && !set)
		{
			sign *= -1;
		}
		else if (isdigit(*s))
		{
			result = result * 10 + (*s - '0');
			set = true; /* Start processing number */
		}
		/* Break on invalid character after starting the number */
		else if (set)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
