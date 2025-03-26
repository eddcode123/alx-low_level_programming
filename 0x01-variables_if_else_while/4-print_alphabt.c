#include <stdio.h>
/**
 * main - Prints alphabet excluding q and e
 * Return: Always (0)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
