#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 49;

	putchar(48);
	while (c <= 57)
	{
		putchar(',');
		putchar(' ');
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
