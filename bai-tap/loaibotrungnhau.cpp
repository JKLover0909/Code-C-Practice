#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[1000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for (int j=1;j<n;j++)
	{
		
		if (a[j]!=0)
		{
			for (int k=j+1;k<=n;k++)
			{
				if (a[k]==a[j])
				a[k]=0;
			}
		}
	}
	for (int z=1;z<=n;z++)
	{
		if (a[z]!=0)
		printf("%d\t",a[z]);
	}
	return 0;
}
