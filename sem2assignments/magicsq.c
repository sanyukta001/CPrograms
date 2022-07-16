#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **p;
    int n,i,j,k;
    printf("Enter the size of the matrix\n");
    scanf("%d",&n);             
    i = n/2;
    j = n-1;
    p = (int**)malloc(sizeof(int)*n);
    for (k = 0; k < n; k++)
        *(p+k) = (int*)malloc(sizeof(int)*n);
    for (k = 1; k <= n*n; k++)
    {
        p[i][j] = k;
        i--;
        j++;
        if(i == -1 && j == n)
        {
            i = 0;
            j = n-2;
        }
        else if(i == -1 || j == n)
        {
            if(i == -1)
                i = n-1;
            if(j == n)
                j = 0;
        }
        if(p[i][j] >=1 && p[i][j] <= n*n)
        {
            i++;
            j -= 2;
        } 
    }
    printf("The generated magic square matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}