#include<stdio.h>
int main()
{
	int x,y;
	printf("Please the value of X:");
	scanf("%d",&x);
	if(x<0) y=-1;
	else if(x==0) y=0;
	else y=1;
	printf("The value of Y is %d\n",y);
	return 0;
}
