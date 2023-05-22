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
	for (count = 3; count <= 50; count++)
	{
		/* initialize result */
		result = first + second;
		/* check for end of list and add new line */
		if (count == 50)
		{
			printf("%lu\n", result);
		}
		else /* if we are not at 50 seperate with comma and space */
		{
			printf("%lu, ", result);
		}
		/* asign 1st with 2nd and 2nd with result */
		first = second;
		second = result;
		if (result % 2 == 0)
			sum += result;
	}
		printf("%lu\n", sum);
	return (0);
}
