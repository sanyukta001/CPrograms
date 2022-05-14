#include<stdio.h>

int main()
{
    int a[] = {2,3,2,9,4,7,5,9};
    int arr[9+1]={0};
    for(int i = 0; i < 8; i++)
    {
        int c = 0;
        for (int j = 0; j < 8; j++)
        {
            if(a[i] == a[j])
            c++;
        }
        arr[a[i]] = c;
    }

    printf("The sorted array is :\n");
    
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] != 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                printf("%d ",i);
            }
            
        }
    }
    
    return 0;
}