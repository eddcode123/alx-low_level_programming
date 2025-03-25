#include <stdio.h>
/**
 * main - print size of types
 * Description: print the size of different data types
 * Return: 0
 */

 int main(void)
 {
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long));
	printf("Size of a long long int: %d", sizeof(long long));
	printf("Size of a float: %d", sizeof(float));

	return (0);
 }