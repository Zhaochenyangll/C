#include<stdio.h>
int main()
{
	int i,index,temp,j,a[10];
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		index=i;//记录a[i]的下标 
		for(j=i+1;j<10;j++)
		if(a[j]<a[index]) index=j; //找出非有序的那个值 
		if(index!=i) //交换元素值 
		{
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
}
	
