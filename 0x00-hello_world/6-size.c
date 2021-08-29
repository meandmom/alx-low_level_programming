#include <stdio.h>
/**
* main - Entery point
*
* Return: always 0
*/
int main(void)
{
char chart;
int inttype;
long int longintt;
long long int longlongt;
float floatt;
printf("size of a char: %zu byte(s)\n", sizeof(chart));
printf("size of an init: %zu byte(s)\n", sizeof(inttype));
printf("size of a long int: %zu byte(s)\n", sizeof(longintt));
printf("size of a long long int: %zu byte(s)\n", sizeof(longlongt));
printf("size of a long float: %zu byte(s)\n", sizeof(floatt));
return (0);
}
