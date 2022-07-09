#include <stdio.h>
#include <stdlib.h>
int* multi(int* ar1,int r1,int c1,int* ar2,int r2,int c2)
{
    int i,j,k;
    int* res = (int*)malloc(sizeof(int)*r1*c2);
    for (i = 0; i < r1; i++)
    { 
        for (j = 0; j < c2; j++)
        {
            int r = 0;
            for (k = 0; k < r2; k++)
            {
                r += (*(ar1+i*r2+k))*(*(ar2+k*c2+j));
            }
            *(res+i*c2+j) = r;
        }
    }
    return res;
}
void display(int* arr,int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",*(arr+i*n+j));
        }
        printf("\n");
    }
}
int main()
{
    int r1,r2,c1,c2,i,j;
    printf("Enter the row and column of first array\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of second array\n");
    scanf("%d%d",&r2,&c2);
    int* ar1 = (int*)malloc(sizeof(int)*r1*c1);
    int* ar2 = (int*)malloc(sizeof(int)*r2*c2);
    printf("Enter the array elements of the first array\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d",(ar1+i*c1+j));
     printf("Enter the array elements of the second array\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d",(ar2+i*c2+j));
    printf("The first array is\n");
    display(ar1,r1,c1);
    printf("The second array is\n");
    display(ar2,r2,c2);
    if(c1!=r2)
    printf("Multiplication not possible\n");
    else
    {
        int* p =  (int*)malloc(sizeof(int)*r1*c2);
        p = multi(ar1,r1,c1,ar2,r2,c2);
        printf("The result of multiplication is : \n");
        display(p,r1,c2);
    }
}