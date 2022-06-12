#include <stdio.h>
int prime(int);
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
            if(prime(i))
                printf("%d ",i);
    }
    
    return 0;
}
int prime(int x)
{
    int i,f = 0;
    for (i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
        {
            f = 1;
            break;
        }
        f = 0;
    }
    if(f == 1)
        return 0;
    else
        return 1;
    
}