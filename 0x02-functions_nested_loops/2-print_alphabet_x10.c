#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x from a-z
*/

void print_alphabet_x10(void);
{
char ch;
int i;
int i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
