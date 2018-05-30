#include<stdio.h>
int main()
{
	char a[20],b[20],c[40];
	int i,k;
	printf("Please input the first array:");
	scanf("%s",a);
	printf("Please input the second array:");
	scanf("%s",b);
	for(i=0,k=0;a[i]!='\0';i++,k++)
	c[k]=a[i];
	for(i=0;b[i]!='\0';i++,k++)
	c[k]=b[i];
	c[k]='\0';
	puts(c);
	return 0;
}
