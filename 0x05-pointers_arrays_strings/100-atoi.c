#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - printing numbers
 * @s: char pointer
 * Return:int
*/

int _atoi(char *s)
{
int sign = 1;
int i = 0;
int res = 0;

while(1)
{
if ((s[i] >= '0' && s[i] <= '9') || s[i] == '\0' )
{
	break;
}
if (s[i] == '-')
{
	sign = sign * -1;
}
i++;
}

if (s[i] != '\0')
{
while(s[i] >= '0' && s[i] <= '9')
{
res = res * 10 + s[i] - '0';
i++;
}
}


return (res * sign);
}
