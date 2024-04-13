#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		if (i%2==1)
		{
			for (int j=1;j<=i*2-1;j=j+2)
			printf("%d",j);
			printf("\n");
		}
		else
		{
			for (int k=2;k<=i*2;k=k+2)
			printf("%d",k);
			printf("\n");
		}
	}
	return 0;
}