#include <stdio.h>
typedef struct 
{
	int roll;
	int age;
	char name[10];
	char sex;
	int marks;

}student;
int main()
{
	int n;
	char x;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	student a[n];
	for(int i = 0; i < n; i++)
	{
		printf("*****Enter the data of the student %d*****\n",i+1);
		printf("Enter the roll\n");
		scanf("%d",&a[i].roll);
		printf("Enter the age\n");
		scanf("%d",&a[i].age);
		printf("Enter the marks\n");
		scanf("%d",&a[i].marks);
		printf("Enter the name\n");
		scanf("%c",&x);
		scanf("%[^\n]s",a[i].name);
		printf("Enter the sex\n");
		scanf("%c",&x);
		scanf("%c",&a[i].sex);
		if(a[i].age > 18)
			printf("Eligible\n");
		else
			printf("Not Eligible\n");
	}
    if(a[0].sex == 'f')
        printf("The first person is Miss. %s\n",a[0].name);
    else
        printf("The first person is Mr. %s\n",a[0].name);
	return 0;
}