// to check: 32 F is 0 C and 273.16 K
#include <stdio.h>
void temperatures (double f);
int main(void)
{
double fahrenheit;
printf("Enter temperature in F: ");
while (scanf("%lf", &fahrenheit) == 1)
{
temperatures(fahrenheit);
printf("Enter another F-value to calculate or any letter-symbol to exit\n");
}
getchar();getchar();
return 0;
}
void temperatures (double fahrenheit)
{
const double a = 5.0; // F to C
const double b = 9.0; // F to C
const double c = 32.0; // F to C
const double d = 273.16; // F to K
double celsium = a / b * (fahrenheit - c);
double kelvin = celsium + d;
printf("%.2f fahrenheit is %.2f C or %.2f K\n",fahrenheit, celsium, kelvin);
}