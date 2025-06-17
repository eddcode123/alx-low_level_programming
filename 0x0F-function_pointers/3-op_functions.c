#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Function that computes sum of a + b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes difference between two numbers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutiplies two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first parameter
 * @b: second parameter
 * Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes the reminder of two integers divided
 * @a: first parameter
 * @b: second parameter
 *
 * Return: reminder
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
