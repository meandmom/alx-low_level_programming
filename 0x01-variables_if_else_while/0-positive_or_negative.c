#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assigns random number to int n
*
* Return: Always 0 (success)
*/
/**
* betty style doc goes there
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("enter the number n: ");
	scanf("%d", &n);
	if ( n > 0 )
		printf("%d is positive", n);
	else if ( n < 0 )
		printf("%d is negative", n);
	else if ( n == 0 )
		printf("% is zero", n);
	return (0);
}
