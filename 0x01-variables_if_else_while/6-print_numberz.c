#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Describtion: program that prints 0-9
 * Return: 0 Always (Success)
*/
int main(void)
{
int digit;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
