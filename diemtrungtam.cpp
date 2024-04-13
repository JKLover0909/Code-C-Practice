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
	int n,a,b,c,check=0;
	scanf("%d",&n);
	c=n-1;
	int dem[100000]={0};
	while (c--)
	{
		scanf("%d%d",&a,&b);
		dem[a]++;
		dem[b]++;
	}
	if (dem[a]==n-1||dem[b]==n-1)
	printf("Yes");
	else
	printf("No");
	return 0;
}