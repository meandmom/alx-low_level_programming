#include <stdio.h>
/**
* main - intery point
*
* Return: Always 0(success)
*/
int main(void)
{
int ch = 'a';
int CH = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (CH = 'A'; CH <= 'Z'; CH++)
putchar(CH);
putchar('\n');
return (0);
}
