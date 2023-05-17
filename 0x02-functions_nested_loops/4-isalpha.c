#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	/* test if the character is up or lower using if */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
