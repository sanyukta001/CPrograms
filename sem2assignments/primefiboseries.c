#include <stdio.h>
int isprime(int k)
{
    int i,cnt = 0;
    for (i = 2; i <= k/2; i++)
        if(k%i == 0)
            return 0;
    return 1;
}
int main()
{
    int ar[50];
    int n,i,a = 0,b = 1,c,k = 2;
    printf("Enter the size\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        if(i%2 != 0)
        {
            if(i == 1)
                ar[i] = a;
            else if(i == 3)
                ar[i] = b;
            else
            {
                c = a + b;
                a = b;
                b = c;
                ar[i] = c;
            } 
        }
        else
        {
            while(isprime(k) != 1)
                k++;
            ar[i] = k;
            k++;
        }
    }
    printf("The resultant array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}