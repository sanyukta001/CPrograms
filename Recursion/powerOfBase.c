#include <stdio.h>

int powercalc(int base,int power)
{
    if(power==0)
    return 1;
    else
    return base*powercalc(base,power-1);
}
int main()
{
    int base;
   int power;
   printf("Enter the value of base\n");
   scanf("%d",&base);
   printf("Enter the value of power\n");
   scanf("%d",&power);
   printf("The result is %d",powercalc(base,power));

   return 0;
}