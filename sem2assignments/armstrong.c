#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int sum = 0;
    int p = 1;
    int d;
    printf("Enter the number\n");
    scanf("%d", &num);
    int l = 0;
    int cpy = num;
    while (cpy > 0)
    {
        l++;
        cpy = cpy / 10;
    }
    cpy = num;
    while (cpy > 0)
    {
        p = 1;
        d = cpy % 10;
        cpy = cpy / 10;
        for (int i = 1; i <= l; i++)
        {
            p = p * d;
        }
        sum = sum + p;
    }
    if (num == sum)
        printf("It is armstrong number\n");
    else
        printf("It is not armstrong\n");
    return 0;
}