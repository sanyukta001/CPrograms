#include <stdio.h>
int intersection(int x,int ar[],int n)
{
    int i;
    for (i = 0; i < n; i++)
        if(x == ar[i])
            return 1;
    return 0;
}
int main()
{
    int ar1[50];
    int ar2[50];
    int n1,n2,i,j;
    printf("Enter the size of first array\n");
    scanf("%d",&n1);
    printf("Enter the elements of first array\n");
    for (i = 0; i < n1; i++)
        scanf("%d",&ar1[i]);
    printf("Enter the size of second array\n");
    scanf("%d",&n2);
    printf("Enter the elements of second array\n");
    for (i = 0; i < n2; i++)
        scanf("%d",&ar2[i]);

    printf("\na.Union is:\n");
    for (i = 0; i < n1; i++)
       printf("%d ",ar1[i]);

    for (i = 0; i < n2; i++)
        if(intersection(ar2[i],ar1,n1) == 0)
            printf("%d ",ar2[i]);

    printf("\nb.Intersection is:\n");

    for (i = 0; i < n1; i++)
        if(intersection(ar1[i],ar2,n2))
            printf("%d ",ar1[i]);
    return 0;
}