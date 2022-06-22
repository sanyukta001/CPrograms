#include <stdio.h>
int main()
{
    int n,i,o = 0,e = 0;
    int odd[20];
    int even[20];
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        if(x%2 == 0)
            even[e++] = x;
        else
            odd[o++] = x;
    }
    printf("number of odd is %d and even is %d",o,e);
    
    return 0;
}