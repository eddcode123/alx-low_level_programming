#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	/* declare a poniter to char */
	char *ptr = dest;

	/* use a loop to copy each char to dest */
	while (*ptr != '\0')
	{
		*ptr++ = *src++;
	}
	/* add null character to dest */
	*ptr = '\0';

	return (dest);
}
