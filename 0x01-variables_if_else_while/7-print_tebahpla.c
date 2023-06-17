#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Describtion: program that prints Alpa rev
 * Return: 0 Always (Success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
char--;
}
putchar('\n');
return (0);
}
