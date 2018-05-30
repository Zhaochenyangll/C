#include<stdio.h>
int main()
{
	int x,y;
	printf("Please the profit of this month:");
	scanf("%d",&x);
	switch(x/100000)
	{
		case 0: 
		case 1:y=x*0.1;break;
		case 2:y=100000*0.1+(x-100000)*0.075;break;
		case 3:y=100000*0.1+100000*0.75+(x-200000)*0.05;break;
		case 4:y=100000*0.1+100000*0.75+200000*0.05+(x-400000)*0.03;break;
		case 5:y=100000*0.1+100000*0.75+200000*0.05+(x-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:y=100000*0.1+100000*0.75+200000*0.05+400000*0.03+(x-600000)*0.015;break;
		default:y=100000*0.1+100000*0.75+200000*0.05+400000*0.03+400000*0.015+(x-1000000)*0.01;break;
	}
	printf("The bonus of this month is:%d\n",y);
	return 0;
}
