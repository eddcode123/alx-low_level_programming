#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - function pointer to respective operator
 * @s: operator passed as argument
 *
 * Return: pointer to function corresponding to operator
 */

int (*get_op_func(char *s))(int, int)
{
	/* declare struct ops */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (*s == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}

