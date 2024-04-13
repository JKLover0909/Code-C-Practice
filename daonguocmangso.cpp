#include<stdio.h>
#include<math.h>
int main()
{
	int a,b[100],temp;
	scanf("%d",&a);
	for (int i=0;i<a;i++)
	scanf("%d",&b[i]);
	for (int k=a-1;k>=0;k--)
	printf("%d\t",b[k]);
	return 0;
}