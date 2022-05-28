#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    int ar[n];
    if ((n > 0 && n <= 2) || n > 2)
    {
        for (int i = 0; i < n; i++)
        {
            ar[i] = i;
        }
    }
    if (n > 2)
    {
        for (int i = 2; i <= n; i++)
        {
            ar[i] = ar[i - 1] + ar[i - 2];
        }
    }
    if (n > 0)
    {
        printf("The fibonacci terms are\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ar[i]);
        }
        printf("\nThe nth number of the fibonacci series is %d",ar[n-1]);
    }
    return 0;
}