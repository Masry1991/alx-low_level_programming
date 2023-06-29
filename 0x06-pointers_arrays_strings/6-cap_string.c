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
int foundDelimit = 1;
while (*s)
{
if (isDelimiter(*s))
foundDelmit = 1;
else if (isLower(*s) && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
{
foundDelmit = 0;
s++;
}
return (ptr);
}
