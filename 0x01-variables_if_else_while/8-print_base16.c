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
	char c;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
