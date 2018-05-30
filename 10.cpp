#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("10.txt","r");
	int a=0,b=0,c=0,d=0,e=0;
	char ch;
	if(fp==NULL) {
		printf("Can not open file !\n");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		if(ch>='A'&&ch<='Z') a+=1;
		else if(ch>='a'&&ch<='z') b+=1;
		else if(ch>='0'&&ch<='9') c+=1;
		else if(ch==' ') d+=1;
		else e+=1;
		ch=fgetc(fp);	
	}
	printf("capital:%d,lowercase:%d,digit:%d,space:%d,else:%d\n",a,b,c,d,e);
	return 0;
}
