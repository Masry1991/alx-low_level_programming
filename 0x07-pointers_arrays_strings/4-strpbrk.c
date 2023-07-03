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
itr = 0;
while (s[itr] != '\0')
jtr = 0;
while (accept[jtr] == s[itr])
{
if (accept[jtr] == s[itr])
{
p = &s[itr];
return (p);
}
jtr++;
}
itr++;
return (0);
}
