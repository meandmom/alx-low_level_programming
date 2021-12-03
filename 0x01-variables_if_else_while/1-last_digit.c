#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign random number to int n
*
* Return: Always 0 ()
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
last = n % 10;
if (last > 5){
printf("Last digit of %d is %d and is greater than 5", last, n);
}
else if (last == 0){
printf("Last digit of %d is %d and is 0", last, n);
}
else{
printf("Last digit of %d is %d and less than 6 and not 0", last, n);
}
return (0);
}
