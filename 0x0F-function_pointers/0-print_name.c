#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: pointer to name
 * @f: fuction pointer
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    {
        f(name);
    }

}
