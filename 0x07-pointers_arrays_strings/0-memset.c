#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: Returns a pointer to the memory area
 * @b: first inpu
 * @n : second input
 * Return: Alwayas 0
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int itr;
for (itr = 0; n > 0; itr++, n--)
{
s[itr] = b;
}
return (s);
}
