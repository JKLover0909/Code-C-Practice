#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i,j,dem;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a);
		dem=0;
		printf("%d = ",a);
		for (j=2;j<=a;j++)
		{
			while(a%j==0)
			{
				dem++;
				a=a/j;
			}
			if (dem>0)
			printf("%d^%d",j,dem);
			if (a>1&&dem>0)
			printf(" * ");
			dem=0;
		}
		printf("\n");
	}
	return 0;
}