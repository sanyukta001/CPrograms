#include <stdio.h>
int main()
{
    int n,n2 = 0;
    int i,j;
    int arr[50];
    int arr2[50];
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (i = 0; i < n; i++)
    {
        int cnt = 0;
        for (j = 0; j <= i; j++)
        {
            if(arr[i] == arr[j])
                cnt++;
        }
        if(cnt == 1)
            arr2[n2++] = arr[i];
        
    }
    printf("The edited array is\n");
    for (i = 0; i < n2; i++)
        printf("%d ",arr2[i]);

    return 0;
}