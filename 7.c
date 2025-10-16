#include <stdio.h>
void cube(double n);
int main(void)
{
double n;
printf("Enter number to cube it\n");
scanf("%lf", &n);
cube(n);
getchar();getchar();
return 0;
}
void cube(double n)
{
double x3 = n*n*n;
printf("Cube of %f is %f",n, x3);
}