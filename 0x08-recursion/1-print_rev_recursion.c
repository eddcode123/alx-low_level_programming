#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to string to be reversed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	/* set base case */
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
