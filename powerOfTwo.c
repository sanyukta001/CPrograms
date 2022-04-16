#include <stdio.h>

int powercalc(int power)
{
    if(power==0)
    return 1;
    else
    return 2*powercalc(power-1);
}
int main()
{
   int n;
   printf("Enter the value of power\n");
   scanf("%d",&n);
   printf("The result is %d",powercalc(n));

   return 0;
}