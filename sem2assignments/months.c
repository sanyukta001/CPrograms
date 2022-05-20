#include <stdio.h>
int main()
{
	int ch;
	printf("Enter \n1 for january\n2 for february\n3 for march\n4 for april\n5 for may\n6 for june\n7 for july\n8 for august\n9 for september\n10 for october\n11 for november\n12 for december\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("There are 31 days\n");
		break;
	case 2:
		printf("There are 28 days\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("There are 30 days\n");
		break;
	default:
		printf("INVALID INPUT");
	}
}
