#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a , b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping value of a is %d and b is %d\n",a,b);
    return 0;
}
void swap(int* a , int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}