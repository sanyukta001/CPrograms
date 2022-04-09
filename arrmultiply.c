#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** p1;
    int** p2;
    int** p3;
    int r1;
    int c1;
    int r2;
    int c2;
    printf("Enter the row and column of first array\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of second array\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    printf("Multiplication Not Possible");
    else
    {
       p1 = (int**)malloc(sizeof(int)*r1);
       p2 = (int**)malloc(sizeof(int)*r2);
       for (int i = 0; i < r1; i++)
       {
           *(p1+i)=(int*)malloc(sizeof(int)*c1);
       }
       for (int i = 0; i < r2; i++)
       {
           *(p2+i)=(int*)malloc(sizeof(int)*c2);
       }
       printf("Enter the elements of 1st array\n");
       for (int i = 0; i < r1; i++)
       {
           for (int j = 0; j < c1; j++)
           {
               scanf("%d",&p1[i][j]);
           }
       }
       printf("Enter the elements of 2nd array\n");
        for (int i = 0; i < r2; i++)
       {
           for (int j = 0; j < c2; j++)
           {
               scanf("%d",&p2[i][j]);
           }
       }
       p3 = (int**)malloc(sizeof(int)*r1);
        for (int i = 0; i < r1; i++)
       {
           *(p3+i)=(int*)malloc(sizeof(int)*c2);
       }
       for (int i = 0; i < r1; i++)
        { 
            for (int j = 0; j < c2; j++)
            {
             int r = 0;
                for (int k = 0; k < r2; k++)
                {
                  r += p1[i][k]*p2[k][j];
                }
             p3[i][j] = r;
            }
            
        }
        printf("Result is: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ",p3[i][j]);
            }
            printf("\n");
            
        }
    }
    return 0;
}