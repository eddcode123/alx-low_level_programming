#include "main.h"
/**
 * print_last_digit - Prints last digit of an integer
 * @num: Value to compute last digit
 * Return: last digit of an integer
*/

int print_last_digit(int num)
{
	if (num)
	{
		return (num % 10);
	}

	return (-1);
}
