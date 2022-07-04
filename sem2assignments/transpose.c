#include <stdio.h>
#include <stdlib.h>

void display(int** p,int rows, int column)
{
   for (int i = 0; i < rows; i++)
   {
        for (int j = 0; j < column; j++)
            printf("%d ",p[i][j]);
        printf("\n");
   }
}
int main()
{
    int** pt;
    int m,n;
    printf("Enter the rows and column \n");
    scanf("%d%d",&m,&n);
    pt = (int**)malloc(sizeof(int)*m);
    for (int i = 0; i < m; i++)
    {
        *(pt+i) = (int*)malloc(sizeof(int)*n);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value at %d%d ",i,j);
            scanf("%d",&pt[i][j]);
        }
    }
    printf("The original array is\n");
    display(pt,m,n);
    int** pt2;
    pt2 = (int**)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        *(pt2+i) = (int*)malloc(sizeof(int)*m);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            pt2[i][j] = pt[j][i];
    printf("The transpose array is\n");
    display(pt2,n,m);
}