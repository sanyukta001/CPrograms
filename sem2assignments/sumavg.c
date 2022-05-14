//Input three decimal numbers and find their sum and average
#include <stdio.h>

int main()
{
    float sum;
    float average;
    float num1,num2,num3;
    printf("Enter the three numbers\n");
    scanf("%f%f%f",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    average = sum/3;
    printf("The sum is %f and the average is %f",sum,average);

    return 0;
}