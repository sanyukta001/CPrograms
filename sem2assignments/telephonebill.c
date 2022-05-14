#include<stdio.h>

int main()
{
	float bill = 250.0;
	int n;
	printf("Enter the number of calls\n");
	scanf("%d",&n);
	if(n<=100)
		bill = bill + (n*0.2);
	else if(n>100 && n<=200)
		bill = bill + (100*0.2) + ((n-100)*0.3);
	else
		bill = bill + (100*0.2) + (100*0.3) + ((n-200)*0.5);
	printf("The bill is %f \n",bill);
	return 0;
}
