#include<stdio.h>
#include<math.h>
int main()
{
	long long n,a,test;
	scanf("%lld",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&a);
		test=0;
		while (a>0)
		{
			if (a%2!=0)
			{
				test=1;
				break;
			}
			a=a/10;
		}
		if (test==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}