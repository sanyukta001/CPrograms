#include <stdio.h>
#include <Stdlib.h>
int main()
{
    int n,i,sum = 0;
    printf("Enter the size\n");
    scanf("%d",&n);
    int a[n];
    int *b[n];
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        b[i] = &a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += (*b[i]);
    }
    printf("The sum of the elements are %d",sum);
    free(b);
    free(a);
    
    return 0;
}