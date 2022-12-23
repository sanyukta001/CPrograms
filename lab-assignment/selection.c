//write a program to implement selection sort
#include<stdio.h>
#include<stdlib.h>
void selection(int* ar,int n)
{
    int i,j,min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(ar[j] < ar[min])
                min = j;
        }
        int t = ar[min];
        ar[min] = ar[i];
        ar[i] = t;
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
    selection(ar,n);
    display(ar,n);
    
    return 0;
}