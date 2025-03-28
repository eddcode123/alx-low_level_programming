#include "main.h"

/**
 * _islower - check if a charcter is lowercase
 * @c: charcter to be checked
 * Return: 1 if true otherwise 0
*/

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}

	return (0);
}
