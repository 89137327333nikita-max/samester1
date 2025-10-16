// summ of squares
#include <stdio.h>
int main(void)
{
int n=0, z=0, x;
printf("Enter number of squares to sum\n");
scanf("%d", &x);
while (n++<x)
         z=(n*n+z);
printf("%d\n", z);
getchar();getchar();
return 0;
}