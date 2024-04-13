#include<stdio.h>
#include<math.h>
int tcs(int a)
{
	int sum=0;
	int temp=a;
	for (int i=1;i<=a;i++)
	{
		sum=sum+temp%10;
		temp=temp/10;
	}
	return sum;
}

int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	int t1=tcs(a);
	int t2=tcs(b);
	if (t1>t2)
	printf("%d\t%d",b,a);
	else
	printf("%d\t%d",a,b);
	return 0;
}