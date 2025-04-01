#include "main.h"
/**
 * print_last_digit - Prints last digit of an integer
 * @num: Value to compute last digit
 * Return: last digit of an integer
*/

int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
