#include<stdio.h>
int fun(int x)//判断一个数是否是素数 
{
	int s=0,i;
	for(i=2;i<x;i++)
	if(x%i==0) break;
	if(i>=x) s=1;
	return s;
}
int main()
{
	int i;
	for(i=1;i<100;i++)
	if(fun(i)==1) printf("%d ",i);
	printf("\n");
	return 0;
}
