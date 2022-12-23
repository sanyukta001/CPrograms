//write a program to implement insertion sort
#include<stdio.h>
#include<stdlib.h>
void insertion(int* ar,int n)
{
    int i = 0,j;
    for(i = 0;i < n; i++)
    {
        j = i;
        if(ar[i] > ar[i+1])
        {
           //swap(ar[i],ar[i+1]);
            int t = ar[i];
            ar[i] = ar[i+1];
            ar[i+1] = t;
        }
        while((ar[j-1] > ar[j]) && (j != 0))
        {
            //swap(ar[j-1],ar[j]);
            int t = ar[j-1];
            ar[j-1] = ar[j];
            ar[j] = t;
            j--;
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
    insertion(ar,n);
    display(ar,n);
    
    return 0;
}