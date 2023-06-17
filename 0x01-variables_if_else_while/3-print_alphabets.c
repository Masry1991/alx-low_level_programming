#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Describtion: program that prints the alphabet in lowercase & Uppercase
 * Return: 0 Always (Success)
*/
int main(void)
{
char ch = 'a';
char CH = 'A';
/*prints a-z */
while (ch <= 'z')
{
putchar(ch);
ch++;
/*prints A-Z*/
} while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}

