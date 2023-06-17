#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Describtion: Program to print reversed alphabet
 * Return: 0 Alwyas (Suceess)
*/
int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
