/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
#define ll long long;
void nhapmang(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	
}
int main()
{
	int a[100],b[10000]={0};
	int d[10000]={0};
	int n,dem=0;
	scanf("%d",&n);
	nhapmang(a,n);
    int i;
	for(i=0;i<n;i++)
	{
		int c=a[i];
		b[c]++;
		d[c]++;
	}
	for(i=0;i<n;i++)
	{
		if(d[a[i]]>1)
		{
			dem++;
			d[a[i]]=0;
		}	
	}
	if (dem==0)
	printf("0");
	for(i=0;i<n;i++)
	{
		if(b[a[i]]>1)
		{
			printf("%d ",a[i]);
			b[a[i]]=0;
		}
	}
	return 0;
}
