#include "main.h"
/**
 *print_last_digit - prints last digit
 *@n:the passed args
 *Returns: last digit
 *Return: 0
 */
int print_last_digit(int n)
{
	{
		int x;

		if (n < 0)
			(n = -n);
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}
	return (0);
}
