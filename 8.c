#include <stdio.h>
int main(void)
{
int x, y;
printf("Enter second modulus operator\n");
scanf("%d",&y);
printf("Enter first modulus operator\n");
scanf("%d",&x);
while(x > 0)
  {
  printf("%d %% %d = %d\n", x, y, x%y);
  printf("Enter another first modulus operator or 0 for exit\n");
  scanf("%d",&x);
  }
getchar();
return 0;
}