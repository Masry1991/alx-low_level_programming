#include "main.h"

/**
 * _strlen_recursion - unction that returns the length of a string.
 * @s: input
 * Return: void
*/

int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
