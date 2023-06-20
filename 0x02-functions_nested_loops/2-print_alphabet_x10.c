#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x from a-z
*/

void print_alphabet_x10(void)
{
int line, ch;
for (line = 0; line <= 9; line++)
{
for (ch = 'a'; ch <= 'z'; ch++) 
_putcar(ch);
}
_putchar('\n');
}
