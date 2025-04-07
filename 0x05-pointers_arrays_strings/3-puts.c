#include "main.h"

/**
 * _puts - prints a sting to th stdout
 * @s: pointer to the array of character/s
 * Return: Nothing
*/

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

}
