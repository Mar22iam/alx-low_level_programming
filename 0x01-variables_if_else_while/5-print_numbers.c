#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main is my entry point
 * Return: 0 is always sucsses
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n = 0; n < 10; n++)
	printf("%d \n", n);
	printf("\n");
	return (0);
}
