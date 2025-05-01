#include "main.h"

/**
 * _isdigit - Function that checks if an input is a valid digit
 * @c: The input to check
 * Return:  1 if its valid else 0
*/

int _isdigit(int c)
{
	return (((int) c >= 0 && (int) c <= 9) ? 1 : 0);
}
