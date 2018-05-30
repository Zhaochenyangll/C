#include<stdio.h>
int main()
{
	char a[40],b[40];
	int i,j;
	printf("Please input the first array:");
	gets(a);
	printf("Please input the second array:");
	gets(b);
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]!=b[i]) {
			printf("%d\n",a[i]-b[i]);
			break;
		}
	}
	if(a[i]=='\0'&&b[i]=='\0') printf("0");
	if(a[i]=='\0'&&b[i]!='\0') printf("-1");
	if(b[i]=='\0'&&a[i]!='\0') printf("1");
	return 0;
}
