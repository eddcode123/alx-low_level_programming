#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: Nothing
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
