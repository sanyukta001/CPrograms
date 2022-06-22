#include <stdio.h>
int main()
{
    int n,item,i,f = 1;
    int arr[50];
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&item);
    for (i = 0; i < n; i++)
        if(arr[i] == item)
        {
            f = 0;
            printf("search found at index %d\n",i);
            break;
        }
    if(f == 1)
        printf("Sorry! item not found\n");

    return 0;
}