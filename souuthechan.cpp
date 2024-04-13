#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		long long a,n;
		int dc=0;
		int dl=0;
		scanf("%lld",&a);
		if (a%2==0)
		printf("NO\n");
		else
		{
			while (a>0)
			{
				n=a%10;
				if (n%2==0)
				dc++;
				else 
				dl++;
				a=a/10;
			}
			if (dc<dl)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}