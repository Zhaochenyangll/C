#include<stdio.h>
int main()
{
	int grade;
	char ch;
	printf("Please input your grade:");
	scanf("%d",&grade);
	switch(grade/10)
	{
		case 10:
		case 9:ch='A';break;
		case 8:ch='B';break;
		case 7:ch='C';break;
		case 6:ch='D';break;
		default:ch='E';break;
	}
	printf("Your level is %c\n",ch);
	return 0;
}
