#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Describtion: program that prints the alphabet in lowercase
 * Return: 0 Always (Success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
