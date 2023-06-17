#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Describtion: program that prints 0-9
 * Return: 0 Always (Success)
*/
int main(void)
{
int d;
for (d = '0', d < '10', d++)
putchar(d);
putchar('\n');
return (0);
}
