#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: n is the number of times the character _ should be printed
*/

void print_line(int n)
{
int inChr;
if (n <= 0)
_putchar ('\n');
else
{
for (inChr = 1; inChr <= n; inChr++)
_putchar('_');
_putchar('\n');
}
}
