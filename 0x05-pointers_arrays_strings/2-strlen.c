/**
 * _strlen - computes the length of a string
 * @s: pointer to the array of charcters
 * Return: length of sting
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}

	return (len);
}
