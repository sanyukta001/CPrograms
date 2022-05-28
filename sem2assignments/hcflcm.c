#include <stdio.h>
int main()
{
    int a,b,hcf,lcm,min,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a > b)
        min = b;
    else
        min = a;
    for (i = 1; i <= min/2; i++)
    {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    lcm = (a * b) / hcf;
    printf("The lcm is %d and hcf is %d",lcm,hcf);
    return 0;
}