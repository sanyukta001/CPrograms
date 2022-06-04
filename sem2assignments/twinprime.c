#include<stdio.h>
int prime(int);
int main()
{
    int n,i;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for (i = 2; i < n; i++)
    {
        if(prime(i) == 1 && prime(i+2) == 1)
            printf("%d ",i,i+2);
    }
    
    return 0;
}
int prime(int n)
{
    int i, f = 1;
    for (i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            f = 0;
            break;
        }
    }
    if(f == 1)
        return 1;
    else
        return 0;
    
}