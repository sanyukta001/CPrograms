#include <stdio.h>
int main()
{
    int m,n;
    int i,j;
    int z = 0;
    int arr[50][50];
    printf("Enter the rows and column\n");
    scanf("%d%d",&m,&n);
    printf("Enter the array elements\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d",&arr[i][j]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(arr[i][j] == 0)
                z++;
        }
    }
    if(((m*n)-z) < z)
        printf("Sparse matrix\n");
    else
        printf("Not sparse matrix");
    return 0;
}