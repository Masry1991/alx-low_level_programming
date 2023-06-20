#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times from a-z
*/

void print_alphabet_x10(void)
{
int c;
char i;
for (c = 0; c <= 9; c++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
