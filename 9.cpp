#include<stdio.h>
void input(int *a)//ʵ��a������ 
{
	int i;
	for(i=0;i<15;i++)
	scanf("%d",&a[i]);
}
void sort(int *a)//������ 
{
	int i,index,temp,j;
	for(i=0;i<14;i++)
	{
		index=i;//��¼a[i]���±� 
		for(j=i+1;j<15;j++)
		if(a[j]>a[index]) index=j; //�ҳ���������Ǹ�ֵ 
		if(index!=i) //����Ԫ��ֵ 
		{
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
int search(int *a,int x)//���Һ����������±� 
{
	int i;
	if(a[8]==x) return 8;//���ֲ��ң����м俪ʼ 
	if(a[8]>x) //��Ϊ�����Ѿ��������a[5]>x ������м����ұ��� 
	{
		for(i=9;i<15;i++)
		if(a[i]==x) return i+1;
	}
	if(a[8]<x) //��Ϊ�����Ѿ��������a[5]<x ������м�������� 
	{
		for(i=7;i>=0;i--)
		if(a[i]==x) return i+1;
	}
	return -1;//ǰ����ڵ������return ������ֵ��������е���һ����˵��������û�в��ҵ�ֵ������-1 
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
