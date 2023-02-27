#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * puts_half - printing half string
 * @s: char pointer
 * Return: void
*/

void puts_half(char *s)
{
int c = 0;
int i = 0;
int h = 0;
while (1)
{
	if (s[i++] == '\0')
		{
		break;
		}
	c++;
}
h = c / 2;
if(c % 2 == 1)
{
	h++;
}
for (i = h; i < c; i++)
	{
	_putchar(s[i]);
	}

_putchar('\n');

}
