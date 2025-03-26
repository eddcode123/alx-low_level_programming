#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	/* Iterate through the first number */
	for (num1 = 0; num1 <= 98; num1++)
	{
		/* Iterate through the second number */
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			/* Print the first number */
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');

			/* Print the second number */
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			/* Avoid printing trailing comma and space */
			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Print newline at the end */
	putchar('\n');

	return (0);
}
