#include <stdio.h>
int main()
{
    int n,rev = 0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n > 0)
    {
        int d = n%10;
        n = n/10;
        rev = rev*10 + d;
    }
    printf("The reverse of the number is %d",rev);
    return 0;
}