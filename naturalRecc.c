#include <stdio.h>

int calc_sum(int n)
{
    if(n==0)
    return 0;
    else
    return (n+calc_sum(n-1));
}
int main()
{
    int n;
    int sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
   int ans = calc_sum(n);
   printf("The sum upto n natural numbers is %d", ans);

    return 0;
}