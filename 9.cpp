#include<stdio.h>
void input(int *a)//实现a的输入 
{
	int i;
	for(i=0;i<15;i++)
	scanf("%d",&a[i]);
}
void sort(int *a)//排序函数 
{
	int i,index,temp,j;
	for(i=0;i<14;i++)
	{
		index=i;//记录a[i]的下标 
		for(j=i+1;j<15;j++)
		if(a[j]>a[index]) index=j; //找出非有序的那个值 
		if(index!=i) //交换元素值 
		{
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
int search(int *a,int x)//查找函数，返回下标 
{
	int i;
	if(a[8]==x) return 8;//二分查找，从中间开始 
	if(a[8]>x) //因为数组已经排序，如果a[5]>x ，则从中间往右边找 
	{
		for(i=9;i<15;i++)
		if(a[i]==x) return i+1;
	}
	if(a[8]<x) //因为数组已经排序，如果a[5]<x ，则从中间往左边找 
	{
		for(i=7;i>=0;i--)
		if(a[i]==x) return i+1;
	}
	return -1;//前面存在的情况都return 返回了值，如果进行到这一步，说明数组中没有查找的值，返回-1 
}
int main()
{
	int a[15],k,i;
	printf("Please input 15 digit:");
	input(a);
	sort(a);
	printf("The array of sorted is:");
	for(i=0;i<15;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("Please input the value you want to search:");
	scanf("%d",&k);
	if(search(a,k)!=-1) printf("The value is the %dth digit\n",search(a,k));
	else printf("Not found the value\n");
	return 0;	
}
