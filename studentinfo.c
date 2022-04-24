#include <stdio.h>

struct st
{
    int marks;
    long int roll;
    int age;
    long int phone;

};

int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct st bag[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks \n");
        scanf("%d",&bag[i].marks);
        printf("Enter the roll number \n");
        scanf("%ld",&bag[i].roll);
        printf("Enter the age\n");
        scanf("%d",&bag[i].age);
        printf("Enter the phone number\n");
        scanf("%ld",&bag[i].phone);
    }
    printf("The Info of students are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("The marks is: %d\n",bag[i].marks);
        printf("The roll number is: %ld\n",bag[i].roll);
        printf("The age is: %d\n",bag[i].age);
        printf("The phone number is: %ld\n",bag[i].phone);
    }
    
    return 0;

}