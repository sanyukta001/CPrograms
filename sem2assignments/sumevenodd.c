#include <stdio.h>
int main()
{
    int m,n;
    int i,j;
    int arr[50][50];
    int even = 0, odd = 0;
    printf("Enter the rows and column\n");
    scanf("%d%d",&m,&n);
    printf("Enter the array elements\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d",&arr[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            if(arr[i][j] % 2 == 0)
                even += arr[i][j];
            else
                odd += arr[i][j];
        }
    printf("The sum of even is %d and odd is %d",even,odd);
    
    return 0;
}