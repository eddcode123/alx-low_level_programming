#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
