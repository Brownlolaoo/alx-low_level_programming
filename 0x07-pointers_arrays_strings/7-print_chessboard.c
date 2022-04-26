#include "main.h"
/**
 * print_chessboard - print the chessboard, 2d array
 * @a: array of chars
 * Return: void
 */
void print_chessboard(char (a)[8])
{
	/*Declaring variables*/
	int i, u;
	i = 0;
	while (j < 8)
	{
		u = 0;
		while (j < 8)
		{
			_putchar (a[i][u]);
			u++;
		}
		_putchar ('\n'); /*print new line*/
		i++; /*add +1*/
	}
}
