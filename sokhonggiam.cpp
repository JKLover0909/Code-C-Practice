/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int check(int n)
{
	int a,b;
	int temp=n;
	while (temp>0)
	{
		a=temp%10;
		temp=temp/10;
		b=temp%10;
		if (a<b)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	test
	{
		int n;
		long long a,b; 
		scanf("%d",&n);
		int i;
		a=pow(10,n-1);
		b=pow(10,n);
		for (i=a;i<b;i++)
		{
			if (check(i)!=0)
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}