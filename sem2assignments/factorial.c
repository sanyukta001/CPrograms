#include<stdio.h>
long int fact(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The factorial of %d is %ld ",n,fact(n));
    return 0;
}
long int fact(int n)
{
    int i;
    long int f = 1;
    for (i = 1; i <= n; i++)
    {
        f*=i;
    }
    return f;
}