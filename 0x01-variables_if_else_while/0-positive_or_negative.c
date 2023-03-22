#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main is my entry point
 * Return: 0is always sucsses
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (x > 0)
		printf("%d is positive\n", x);
	else if (x < 0)
		printf("%d is negative\n", x);
	else
		printf("%d is zero\n", x);
	return (0);
}
