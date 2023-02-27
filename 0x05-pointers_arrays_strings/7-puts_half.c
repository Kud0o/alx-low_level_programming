#include "main.h"
#include <stdio.h>
/**
 * puts_half - printing half  string 
 * @s: char pointer
 * Return: void
*/

void puts_half(char *s)
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

for (i = c/2; i < c; i++)
	{
	_putchar(s[i]);
	}
_putchar('\n');

}
