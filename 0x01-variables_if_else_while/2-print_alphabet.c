#include <stdio.h>
/**
 * main - Prints the entire alphabet in lowercase letters
 * Return: Always (0)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
