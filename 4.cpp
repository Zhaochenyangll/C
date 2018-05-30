#include<stdio.h>
int main()
{
	int i,index,temp,j,a[11],k;
	printf("Please input ten digit:");
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
	printf("The array of sorted is:");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("Please input the value of you want to insert:");
	scanf("%d",&k);
	for(i=0;i<10;i++)
	{
		if(a[i]>k) {
			for(j=10;j>=i;j--)
			a[j]=a[j-1];
			a[i]=k;
			break;		
		}
	}
	if(i>=10) a[10]=k;
	printf("The array of inserted is:");
	for(i=0;i<11;i++)
	printf("%d ",a[i]);
	return 0;
}
	
