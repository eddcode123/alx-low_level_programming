#include "main.h"
#include <string.h>
/**
 * leet - function that encodes a string to 1337
 * @s: pointer to a string
 * Return: Pointer to the modified string
*/
char *leet(char *s)
{
	int cursor = 0;

	while (s[cursor] != '\0')
	{
		if (s[cursor] == 'a' || s[cursor] == 'A')
		{
			s[cursor] = '4';
		}
		else if (s[cursor] == 'e' || s[cursor] == 'E')
		{
			s[cursor] = '3';
		}
		else if (s[cursor] == 'o' || s[cursor] == 'O')
		{
			s[cursor] = '0';
		}
		else if (s[cursor] == 't' || s[cursor] == 'T')
		{
			s[cursor] = '7';
		}
		else if (s[cursor] == 'l' || s[cursor] == 'L')
		{
			s[cursor] = '1';
		}
	}

	return (s);
}
