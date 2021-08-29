#include <stdio.h>
/**
* main - Entery point
*
* Return: always 0
*/
int main(void)
{
char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;
printf("size of a char: %zu byte(s)\n", sizeof(chartype));
printf("size of an init: %zu byte(s)\n", sizeof(inttype));
printf("size of a long int: %zu byte(s)\n", sizeof(longinttype));
printf("size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
printf("size of a long float: %zu byte(s)\n", sizeof(floattype));
return(0)
}
