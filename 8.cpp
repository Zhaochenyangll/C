#include<stdio.h>
int main()
{
	int num[10][10],n,i,j,max[10],min[10],p=0,m;
	printf("Please input the row and column you want to build in turn ");
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&num[i][j]);
	}
	for(i=0;i<m;i++)
	{
		max[i]=num[i][0];
		for(j=0;j<n;j++)
		{
			max[i]=max[i]>num[i][j]?max[i]:num[i][j];
		}		
	}
	for(j=0;j<n;j++)
	{
		min[j]=num[0][j];
		for(i=0;i<m;i++)
		{
			min[j]=min[j]<num[i][j]?min[j]:num[i][j];			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max[i]==num[i][j]&&min[j]==num[i][j]) {
			printf("The saddle point position is£º%d %d",i,j);p++;}
		}
	}
	if(p==0) printf("NONE");
	return 0;	
}
