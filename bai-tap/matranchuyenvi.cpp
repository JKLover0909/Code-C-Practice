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
	int m,n,i,j;
	int a[100][100],b[100][100];
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		b[j][i]=a[i][j];
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=m;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
}