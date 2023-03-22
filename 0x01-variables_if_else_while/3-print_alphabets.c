#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main is my entry point
 * Return: 0 is always sucsses
 */
int main(void)
{
	char c;

	srand(time(0));
	c = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}

