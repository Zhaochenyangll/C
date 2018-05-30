#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,h=0;
	printf("Please input the X and Y coordinates of a point:");
	scanf("%d %d",&x,&y);
	if(hypot(x-2,y-2)<=1||hypot(x+2,y-2)<=1||hypot(x-2,y+2)<=1||hypot(x+2,y+2)<=1) h=10;
	printf("The height of the building is %dm\n",h);
	return 0; 
}
