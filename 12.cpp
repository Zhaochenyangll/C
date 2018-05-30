#include<stdio.h>
int main()
{
	char ch[80];
	int i;
	printf("Please input a telegraph text:");
	gets(ch);
	printf("The password is£º");
	puts(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]<='Z'&&ch[i]>='A')
    	ch[i]=155-ch[i];
		else if(ch[i]<='z'&&ch[i]>='a')
		ch[i]=219-ch[i];
	}
	printf("The original is:");
	puts(ch);
	return 0;
}
