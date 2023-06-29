#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: first input
 *
 * Return: Always 0
*/

char *cap_string(char *s)
{
char *ptr = s;
int founDelimit = 1;
while (*s)
{
if (isDelimiter(*s))
founDelmit = 1;
else if (isLower(*s) && founDelimit)
{
*s -= 32;
founDelimit = 0;
}
else
{
founDelmit = 0;
s++;
}
return (ptr);
}
