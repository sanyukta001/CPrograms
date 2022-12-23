//write a program to implement bubble sort
#include<stdio.h>
#include<stdlib.h>
void bubble(int* ar,int n)
{
    int i,j;
    for (i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(ar[j] > ar[j+1])
            {
                int t = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = t;
            }
        }
    }
}
void display(int* ar, int n)
{
    int i;
    printf("The array is:\n");
    for(i = 0; i < n; i++)
        printf("%d ",ar[i]);
    printf("\n");
}
int main()
{
    int n,i;
    printf("Enter the Size of the array\n");
    scanf("%d",&n);
    int* ar = (int*)malloc(sizeof(int)*n);
    printf("Enter %d Elements\n",n);
    for (i = 0; i < n; i++)
        scanf("%d",&ar[i]);
    bubble(ar,n);
    display(ar,n);
    
    return 0;
}