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
	char c = 'a';

	while (c <= 'z')
	{	if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
