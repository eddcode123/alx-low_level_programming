#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function pointer responsible for getting the
 * correct function operator
 * @s: pointer to the operator to get
 *
 * Return: callback function that matches the operator or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
