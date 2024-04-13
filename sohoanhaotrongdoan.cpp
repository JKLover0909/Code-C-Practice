#include<stdio.h>
#include<math.h>
long long shh(int a)
{
	int sum=0;
	int i;
	for (i=1;i<=a/2;i++)
	{
		if (a%i==0)
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int m,n,temp;
	scanf("%d%d",&m,&n);
	if (m>n)
	{
		temp=n;
		n=m;
		m=temp;
	}
	for (int i=m;i<=n;i++)
	{
		if (shh(i)==i)
		printf("%d\t",i);
	}
	return 0;
}