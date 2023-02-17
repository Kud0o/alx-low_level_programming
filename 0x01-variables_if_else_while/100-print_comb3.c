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
	int  new = 1;
	int i = 48;
	int j = 48;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i <= j)
			{
				if (new == 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
			}
			new = 0;
		}
	}
	putchar('\n');

	return (0);
}
