#include <stdio.h>
int isprime(int x)
{
    if(x == 1)
        return 0;
    int cnt = 0;
    for (int i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
            cnt++;
    }
    if(cnt == 0)
        return 1;
    else
        return 0;
    
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n%2 != 0 || n <= 2)
    {
        printf("Not possible\n");
    }
    else
    {
        printf("The numbers are:\n");
        for (int i = 2; i <= n/2; i++)
        {
            if(isprime(i)==1)
            {
                if(isprime(n-i)==1)
                {
                    printf("%d and %d\n",i,n-i);
                }
            }
        }
        
    }
    return 0;
}