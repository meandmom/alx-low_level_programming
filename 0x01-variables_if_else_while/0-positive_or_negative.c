#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assigns random number to int n
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf(" ");
scanf("%d", &n);
if (n > 0)
printf("%dis positive\n", n);
else if (n < 0)
printf("%dis negative\n", n);
else
printf("%dis zero\n", n);
return (0);
}
