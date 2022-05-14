//Input temperature in celcius and convert it to fahrenheit
#include <stdio.h>

int main()
{
    float celcius , farenhite;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&celcius);
    farenhite = (celcius*9)/5+32;
    printf("The farenhite value of %f is %f",celcius,farenhite);

    return 0;
}