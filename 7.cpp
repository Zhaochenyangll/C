#include <stdio.h>
#define N 16
int main() 
{ 
	 int a[N][N],i,j,k,p,m,n; 
	 p=1; 
	 while(p==1) 
	 {  printf("Enter n(n=1��15)��"); //��������С�ڵ���N-1������
	 	scanf("%d",&n); 
	 	if((n!=0)&&(n<=N-1)&&(n%2!=0)) p=0; 
	 } 	
	 for(i=1;i<=n;i++) /*��ʼ��*/ 
	 for(j=1;j<=n;j++) a[i][j]=0; 
	 j=n/2+1; /*����ħ����*/ 
	 a[1][j]=1; 
	 for(k=2;k<=n*n;k++) 
	 { i=i-1; 
	 j=j+1; 
	 if((i<1)&&(j>n)) 
	 { i=i+2; 
	 j=j-1; 
	 } 
	 else 
	 { if(i<1) i=n; 
	 if(j>n) j=1; 
	 } 
	
	 if(a[i][j]==0) a[i][j]=k; 
	 else 
	 { i=i+2; 
	 j=j-1; 
	 a[i][j]=k; 
	 } 
	 } 
	
	 for(i=1;i<=n;i++) /*���ħ����*/ 
	 { for(j=1;j<=n;j++) 
	 printf("%4d",a[i][j]); 
	 printf("\n"); 
	 }
	 return 0;
} 
