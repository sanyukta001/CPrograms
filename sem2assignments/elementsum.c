#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* pt;
    int m,i;
    printf("Enter the size\n");
    scanf("%d",&m);
    pt = (int*)malloc(sizeof(int)*m);
    printf("Enter the array elements\n");
    for (i = 0; i < m; i++)
            scanf("%d",(pt+i));
    int sum = 0;
    for (i = 0; i < m; i++)
        sum += *(pt+i);
    printf("The sum of the elementd are %d",sum);
    return 0;
}