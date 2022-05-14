#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Ener three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greatest\n",a);
    }
    else if(b<c)
        printf("%d is smallest",b);
    else
        printf("%d is greatest\n",c);

    return 0;
}