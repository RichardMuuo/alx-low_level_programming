#include <stdio.h>

/**
* main - prints the sizes of datatypes using sizeof() operator
*
*return 0
*/

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of char:%lu.\n", (unsigned long)sizeof(c));
printf("size of int:%lu.\n", (unsigned long)sizeof(i));
printf("size of long int:%lu.\n", (unsigned long)sizeof(li));
printf("size of long long int:%lu.\n", (unsigned long)sizeof(lli));
printf("size of float:%lu.\n", (unsigned long)sizeof(f));

return (0);
}
