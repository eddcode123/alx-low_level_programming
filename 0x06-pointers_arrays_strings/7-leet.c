#include "main.h"
#include <string.h>
/**
 * leet - function that encodes a string to 1337
 * @s: pointer to the first charcter of a string
 * Return: Pointer to the modified string
*/
char *leet(char *s)
{
	int cursor = 0, i;
	char ch[] = {'A', 'E', 'O', 'T', 'L'};
	char ch1[] = {'4', '3', '0', '7', '1'};

	while (s[cursor] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[cursor] == ch[i] || s[cursor] - 32 == ch[i])
			{
				s[cursor] = ch1[i];
				break;
			}
		}
		cursor++;
	}

	return (s);
}
