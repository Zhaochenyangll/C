#include<stdio.h>
int main()
{
	int x,y;
	printf("Please the profit of this month:");
	scanf("%d",&x);
	if(x<=100000) y=x*0.1;
	else if(x<=200000) y=100000*0.1+(x-100000)*0.075;
	else if(x<=400000) y=100000*0.1+100000*0.75+(x-200000)*0.05;
	else if(x<=600000) y=100000*0.1+100000*0.75+200000*0.05+(x-400000)*0.03;
	else if(x<=1000000) y=100000*0.1+100000*0.75+200000*0.05+400000*0.03+(x-600000)*0.015;
	else y=100000*0.1+100000*0.75+200000*0.05+400000*0.03+400000*0.015+(x-1000000)*0.01;
	printf("The bonus of this month is:%d\n",y);
	return 0;
}
