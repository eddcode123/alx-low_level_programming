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
		_putchar(num % 10 + '0');
		return (num % 10);
	}

	return (-1);
}
