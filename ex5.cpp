#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("Please input a positive number less than 1000: ");
	scanf("%d",&x);
	while(x<0||x>=1000)
	{
		printf("Error! Please input again\n");
		scanf("%d",&x);
	}
	y=sqrt(x);
	printf("Square root of %d is %d\n",x,y);
	return 0;
}
