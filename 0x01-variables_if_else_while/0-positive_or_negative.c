#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number to the variable n each time its executed
 * based on conditon
 * Return: 0 if excited properly
 */
int main(void)
{
	int n;
	/**
	 * main - prints a datatype
	 */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is postive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
