#include "main.h"
#include "stdio.h"
/**
 * print_rev - printing string reversed
 * @s: char pointer
 * Return: void
*/

void _strlen(char *s)
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

for(i = 0;i < c;i++)
	{
		ss[c-1-i] = s[i];
	}
puts(ss);

}
