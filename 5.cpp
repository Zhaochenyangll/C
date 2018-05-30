#include<stdio.h>
int main()
{
	int a[80],i,j,m,b[80];
	printf("How long the array you want to build ?:");
	scanf("%d",&m);
	printf("Please input %d digit:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0,j=m-1;i<m;i++,j--)
	{
		a[i]=b[j];
	}
	printf("The array of reversed order is£º");
	for(i=0;i<m;i++)
	printf("%d ",a[i]);
	return 0;
}
