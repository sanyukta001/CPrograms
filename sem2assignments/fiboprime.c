#include<stdio.h>
int prime(int);
int main()
{
    int n,a = 1,b = 1,c = a + b;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    while(c < n)
    {
        if(prime(c))
            printf("%d ",c);
        a = b;
        b = c;
        c = a + b;
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