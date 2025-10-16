#include <stdio.h>
int main (void)
{
int n=0, z=0;
printf("Choose the number, Neo\n");
scanf("%d", &n);
z = n;
while (n <= z+10)
        {
        printf("%d\n", n++);
        }
getchar();getchar();
return 0;
}