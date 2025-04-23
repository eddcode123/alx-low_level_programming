#include "main.h"
/**
 * string_toupper - Function that changes lowercase letters
 * to uppercase
 * @s: string to be changed
 * Return: pointer to the change string
*/
char *string_toupper(char *s)
{
	int cursor = 0;

	while (s[cursor] != '\0')
	{
		if (s[cursor] >= 97 && s[cursor] <= 122)
		{
			s[cursor] -= 32;
		}
		cursor++;
	}

	return (s);
}
