#include<stdio.h> 
int main()
{
	int n,i,g[10];
	scanf("%d",&n);
	if (n>0 && n<10){
		for (i=1;i<11;i++){
		g[i]=i*n;
		printf("%d",g[i]);
		printf(" ");
	}
	}
}
