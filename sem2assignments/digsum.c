#include <stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n > 0)
    {
        int d = n%10;
        n = n/10;
        sum += d;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}