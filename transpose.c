#include <stdio.h>
#include <stdlib.h>

void display(int** p,int rows, int column)
{

   for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j < column; j++)
       {
           
       printf("%d ",p[i][j]);
       }

       printf("\n");
   }
   
}
int main()
{
    int** pt;
    int r;
    int c;
    printf("Enter the rows and column \n");
    scanf("%d%d",&r,&c);
    pt = (int**)malloc(sizeof(int)*r);
    for (int i = 0; i < r; i++)
    {
        *(pt+i) = (int*)malloc(sizeof(int)*c);
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value at %d%d ",i,j);
            scanf("%d",&pt[i][j]);
        }
        
    }
    printf("The original array is\n");
    display(pt,r,c);
    int** pt2;
    pt2 = (int**)malloc(sizeof(int)*c);
        for (int i = 0; i < c; i++)
    {
        *(pt2+i) = (int*)malloc(sizeof(int)*r);
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            pt2[i][j] = pt[j][i];
        }
        
    }
    
    printf("The transpose array is\n");
    display(pt2,c,r);
    
}