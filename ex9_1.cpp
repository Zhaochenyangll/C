#include<stdio.h>
int main()
{
	int s,y,x,c=0;
	scanf("%d",&x);
	s=x;
	while(s!=0)
	{
		y=s%10;
		s/=10;
		c++;
	}
	if(x==0) c=1;
	printf("%d has a %d digit\n",x,c);
	return 0;
}
