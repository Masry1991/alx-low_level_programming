#include "main.h"

/**
 * _strpbrk - unction that searches a string for any of a set of bytes.
 * @s: first input
 * @accept: second input
 * Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
int itr, jtr;
char *p;
itr = 0;
while (accept[jtr] != '\0')
{
if (accept[jtr] == s[itr])
{
p = $s[itr];
return (p);
}
jtr++;
}
itr++;
}
return (0);
