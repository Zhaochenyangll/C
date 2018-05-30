#include<stdio.h>
int main()
{
	int i,j,a[3][3],sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j||i==2-j) sum+=a[i][j];
		}	
	}
	printf("The sum of the diagonal elements is %d\n",sum);
	return 0;	
}
