#include <stdio.h>
/**
* main - Entery point
*
* Return: Always 0(success)
*/
int main(void)
{
int n;
int c;
for (n = '0'; n <= '9'; n++)
putchar(n);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
