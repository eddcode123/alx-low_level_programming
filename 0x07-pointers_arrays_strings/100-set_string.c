#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to pointer to string
 * @to: pointer to string to be set
 *
 * Return: nothing
 * */

void set_string(char **s, char *to)
{
	*s = to;
}

