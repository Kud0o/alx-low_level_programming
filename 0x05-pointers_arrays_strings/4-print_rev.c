#include "main.h"
#include <stdio.h>
/**
 * print_rev - printing string reversed
 * @s: char pointer
 * Return: void
*/

void print_rev(char *s)
{
int c = 0;
int i = 0;
while (1)
{
	if (s[i++] == '\0')
		{
		break;
		}
	c++;
}

for (i = 0; i < c; i++)
	{
	_putchar(s[c - 1 - i]);
	}
_putchar('\n');

}
