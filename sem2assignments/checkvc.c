#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(isalpha(ch) == 0)
	{
		printf(" ENTER ONLY CHARACTERS! ");
		exit(0);
	}
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'i':
		case 'I':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("This is a vowel\n");
		break;
		default:printf("This is a consonant\n");
	}
}
