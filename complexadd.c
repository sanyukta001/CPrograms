#include <stdio.h>

struct st
{
    float real;
    float img;

};

struct st addcomplex(struct st a, struct st b)
{
    struct st c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

int main()
{
    struct st a;
    struct st b;
    struct st c;
    printf("Enter the first real part and then imaginary part\n");
    scanf("%f%f",&a.real,&a.img);
    printf("Enter the second real part and then imaginary part\n");
    scanf("%f%f",&b.real,&b.img);
    c = addcomplex(a,b);
    printf("The result is: %f+%f",c.real,c.img);

    return 0;
}