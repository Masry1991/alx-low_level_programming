#include "main.h"

/**
 * _islower - checks for lowercase char
 *
 * @c: checks input of function
 *
 * Return: 1 for lowercase cha 0 for anything else
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
