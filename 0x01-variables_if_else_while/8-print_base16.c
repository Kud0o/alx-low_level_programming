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
	char c = '1';

	while (c <= '9')
	{
		putchar(c++);
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
