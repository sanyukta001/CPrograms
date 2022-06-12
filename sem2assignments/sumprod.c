#include <stdio.h>
void sum(int,int,int*);
void prod(int,int,int*);
int main()
{
    int a,b,add,mul;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    sum(a,b,&add);
    prod(a,b,&mul);
    printf("The adition is %d\n",add);
    printf("The multiplication is %d\n",mul);
    return 0;
}
void sum(int a, int b ,int* c)
{
    *c = a+b;
}
void prod(int a, int b, int* c)
{
    *c = a*b;
}