#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,dem,end;
	long long b[1000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for (int j=1;j<=a;j++)
		scanf("%lld",&b[j]);
		end=1;
		for (int k=a;k>=2;k--)
		{
			dem=0;	
			for (int z=1;z<=k-1;z++)
			{
				if (b[k]<b[k-z])
				{
					dem++;
					break;
				}
			}
			if (dem==0)
			end++;
		}
		printf("%d\n",end);
	}
	return 0;
}