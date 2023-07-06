#include<stdio.h>
// #include<stdlib.h>
// program for cyclic swap
void CyclicSwap(int* n1,int* n2,int* n3)
{
    int temp = *n1;
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;  
}
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a,b and c respectively\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The vales before swapping:\na = %d\nb = %d\nc = %d\n ",a,b,c);
    CyclicSwap(&a,&b,&c);
    printf("\nThe vales after swapping:\na = %d\nb = %d\nc = %d\n ",a,b,c);
    return 0;
}
