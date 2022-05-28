#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int l = 0;
    int cp = n;
    while(cp > 0)
    {
        l++;
        cp = cp/10;
    }
    int p = 10;
    for (int i = 1; i < l; i++)
    {
        p = p *10;
    }
    
    if((n*n) % p == n)
    {
        printf("It is automorphous number\n");
    }
    else
    {
        printf("It is not automorphous number\n");
    }
    return 0;
}