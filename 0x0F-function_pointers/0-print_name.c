#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printend
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	/* call function passed and paremeters using pointer */
	if (name && f)
	{
		f(name);
	}
}
