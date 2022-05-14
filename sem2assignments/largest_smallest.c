#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greatest\n",a);
        if(b>c)
            printf("%d is smallest\n",c);
        else
            printf("%d is smallest\n",b);
    }
    else if(b>a && b>c)
    {
        printf("%d is greatest\n",b);
        if(a>c)
            printf("%d is smallest\n",c);
        else
            printf("%d is smallest\n",a);
    }
    else if(c>b && c>a)
    {
        printf("%d is greatest\n",c);
        if(b>a)
            printf("%d is smallest\n",a);
        else
            printf("%d is smallest\n",b);
    }
    

    return 0;
}