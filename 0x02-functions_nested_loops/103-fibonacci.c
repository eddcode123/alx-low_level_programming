#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	/* initialize 1st and 2nd coz we have 1st 2 numbers */
	int count;
	long int first = 1, second = 2;
	long int result, sum = 0;
	/* use a loop to iterate upto 50 */
	for (count = 3; count < 50; count++)
	{
		/* initialize result */
		result = first + second;
		/* check for even numbers */
		if (result % 2 == 0 && result <= 4000000)
			sum += result;
		/* asign 1st with 2nd and 2nd with result */
		first = second;
		second = result;
	}
		printf("%lu\n", sum);
	return (0);
}
