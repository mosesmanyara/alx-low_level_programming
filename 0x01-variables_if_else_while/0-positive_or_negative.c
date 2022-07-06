#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> assigns a random number to the variable n each time its executed
 * based on conditon
 * Return :  always 0
 */
int main(void)
/**
 * main -> assigns a datatpe 
 */
{
	int n;
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
