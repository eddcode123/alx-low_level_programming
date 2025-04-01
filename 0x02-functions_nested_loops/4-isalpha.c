#include "main.h"
/**
 * _isalpha - Checks if a given value is alphabet
 * @c: value to be checked
 * Return: 1 if value is alphabet else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
