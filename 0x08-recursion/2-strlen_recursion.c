#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s:pointer to dtring to find the length.
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	int len = 0, count = 1;
	/* set base case */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = len + count + _strlen_recursion(s + 1);
		return (len);
	}
}
