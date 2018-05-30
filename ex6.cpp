#include<stdio.h>
int main()
{
	int x,y;
	printf("Please input the value of X:");
	scanf("%d",&x);
	if(x<1) y=x;
	else if(x>=10) y=3*x-11;
	else y=2*x-1;
	printf("The value of Y is %d\n",y);
	return 0;
}
