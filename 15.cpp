#include<stdio.h>
int main()
{
	char a[40],b[40];
	int i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	b[i]=a[i];
	b[i]='\0';
	printf("The string of copy is:");
	puts(b);
	return 0;
}
