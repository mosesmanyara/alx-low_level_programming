#include "main.h"
/**
 * print_square - printing line
 * @size: integer params
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
		putchar('\n');
	}
}
