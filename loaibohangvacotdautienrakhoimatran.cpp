/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
int main()
{
	int z;
	scanf("%d",&z);
	for (int x=1;x<=z;x++)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int a[100][100];
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
		}
		printf("Test %d:\n",x);
		for (int k=2;k<=n;k++)
		{
			for (int l=2;l<=m;l++)
			printf("%d ",a[k][l]);
			printf("\n");
		}
	}
	return 0;
}