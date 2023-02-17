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
	int k = 48;
	int l = 48;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = j; l < 58; l++)
				{
					if (((i - 48) * 10 + (j - 48)) < ((k - 48) * 10 + (l - 48)))
					{
					if (new == 0)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					new = 0;
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
