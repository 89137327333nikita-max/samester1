#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12.0
int main(void)
{
float cm, feet, inches, iches_left, inches_float;
printf("Enter you height in centimeters:\n");
scanf("%f",&cm);
while (cm > 0)
{
inches = cm / CM_PER_INCH;
iches_left = (int)inches % (int)INCH_PER_FEET; // modulus operator fail to work with floating values
feet = (inches - iches_left) / INCH_PER_FEET;
inches_float = inches - ((int)feet * INCH_PER_FEET);
printf("%.1f cm is %.0f feets %.1f inches\n",cm,feet,inches_float);
printf("Enter another one or 0 to exit\n");
scanf("%f",&cm);
}
getchar();
return 0;
}