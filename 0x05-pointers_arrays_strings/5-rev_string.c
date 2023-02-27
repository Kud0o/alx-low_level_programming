#include "main.h"
#include <stdio.h>
/**
 * rev_string - make string reversed
 * @s: char pointer
 * Return: void
*/

void rev_string(char *s)
{
int c = 0;
int i = 0;
char *ss = s;
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
	ss[i] = s[c - 1 - i];
	}
s  = ss;
}
