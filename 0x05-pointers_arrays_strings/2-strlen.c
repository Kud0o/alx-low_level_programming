#include "main.h"
/**
 * _strlen - getting string lenght
 * @s: char pointer
 * Return: int
*/

int _strlen(char *s)
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

return (c);

}
