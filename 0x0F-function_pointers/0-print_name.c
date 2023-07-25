#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	/* check if name and f are null */
	if (name != NULL && f != NULL)
		/* if true not true */
		f(name);
}
