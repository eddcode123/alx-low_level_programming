#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: pointer to the first elements of a 2d array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	/*use nested loop to print chessboard */
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			/* print chessboard */
			printf("%c", a[i][j]);
		}
		/* print newline after first row and colum */
		printf("\n");
	}
}
