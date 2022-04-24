#include <stdio.h>
#include <stdlib.h>

struct st
{
    int marks;
    char grade;

};

int main()
{
    printf("Enter the number of students\n");
    int n;
    int a;
    scanf("%d",&n);
    struct st *arr=(struct st*)malloc(n*sizeof(struct st));
    for (int i=0;i<n;i++)
    {
        printf("Enter the marks\n");
        scanf("%d",&a);
        arr[i].marks = a;
        char buffer;
        scanf("%c",&buffer);
        printf("Enter the grade\n");
        scanf("%c",&arr[i].grade);
        // scanf("%c",&buffer);
    }
    for(int i=0;i<n;i++)
    {
        printf("student %d :",(i+1));
        printf("%d-%c\n",arr[i].marks,arr[i].grade);
    }
    return 0;
}