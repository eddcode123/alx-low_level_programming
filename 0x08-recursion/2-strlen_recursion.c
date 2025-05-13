#include "main.h"

/**
 * _strlen_recursion - Finds the len of a string
 * @s: string in question
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
	int len = 0, count = 1;

	/* base case */
	if (*s == '\0')
	{
		return (0);
	}

	len = len  + count + _strlen_recursion(s + 1);
	return (len);
}
