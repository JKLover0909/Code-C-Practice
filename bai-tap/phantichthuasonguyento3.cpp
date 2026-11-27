#include<stdio.h>
#include<math.h>
int main()
{
	long long a;
		scanf("%lld",&a);
		int dem=0,temp=a;
		for (int j=2;j<=a;j++)
		{
			if (temp%j==0)
			printf("%d",j);
			while (temp%j==0)
			{
				temp=temp/j;
				dem=dem+1;
			}
			if (dem!=0)
			printf(" %d ",dem);
			dem=0;
		}
		printf("\n");
	}
	
