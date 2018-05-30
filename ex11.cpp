#include<stdio.h>
int main()
{
	int a[4],i,j,temp;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The four digit from small to big is:");
	for(i=0;i<4;i++)
	printf("%d ",a[i]);
	return 0;
}
