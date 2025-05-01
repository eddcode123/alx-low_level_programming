#include "main.h"

/**
 * _isupper - Funtion that checks if a character is uppercase
 * @c: the character to be checked
 * Return: 1 if c is uppercase else 0
*/

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
