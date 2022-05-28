#include <stdio.h>
int main()
{
    int n,i,count = 0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
            count++;
    }
    if(count == 0)
        printf("It is prime\n");
    else
        printf("It is not prime\n");
    
    return 0;
}