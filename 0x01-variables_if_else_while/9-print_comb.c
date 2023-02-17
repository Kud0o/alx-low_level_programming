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
	int c = 48;
	bool new = true;

	while (c <= 57)
	{
		if (!new)
		{
		putchar(',');
		putchar(' ');
		}
		new = false;
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
