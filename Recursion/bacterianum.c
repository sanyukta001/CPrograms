#include <stdio.h>

int calculate(int days)
{
    if(days ==0)
    return 1;
    else
    return 2*calculate(days-1);
}
int main()
{
    // int days;
    // printf("Enter the number of days\n");
    // scanf("%d",&days);
    printf("%d",calculate(10));

    return 0;
}