//Input two numbers and swap them using third variable
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swapping: a = %d and b = %d\n",a,b);
    int temp = a;
    a = b; 
    b = temp;
    printf("after swapping: a = %d and b = %d",a,b);

    return 0;
}