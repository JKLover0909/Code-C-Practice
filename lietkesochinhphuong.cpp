#include<stdio.h> 
int main()
{
	int i, n, s;
	scanf("%d",&n);
	for(i=1;n>0;n/=10){
		i=i*(n%10);
	}
	printf("%d",i);
}
