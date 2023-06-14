#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: pointer to source string
 * @needle: pointer to string to be searched within source
 *
 * Return: return first occurrence in haystack or null if nothing
 */

char *_strstr(char *haystack, char *needle)
{
    char *result = strstr(haystack, needle);

    return(result);
}
