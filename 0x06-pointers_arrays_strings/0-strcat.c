#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - printing numbers
 * @s: char pointer
 * @a: char pointer
 * Return: char pointer
*/

char *_strcat(char *s, char *a)
{
char array[1000];
strcat(array,s);
strcat(array,a);
s = array;

return (s);
}
