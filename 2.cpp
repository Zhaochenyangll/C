#include<stdio.h>
int main()
{
	int i,index,temp,j,a[10];
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		index=i;//��¼a[i]���±� 
		for(j=i+1;j<10;j++)
		if(a[j]<a[index]) index=j; //�ҳ���������Ǹ�ֵ 
		if(index!=i) //����Ԫ��ֵ 
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
	
