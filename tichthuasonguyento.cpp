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
	test
	{
		int a;
		scanf("%d",&a);
		int j,dem=0;
		long long tich=1;
		for (j=2;j<=a;j++)
		{
			while(a%j==0)
			{
				dem++;
				a=a/j;
			}
			if (dem!=0)
			{
				tich=tich*j;
				dem=0;
			}
		}
		printf("%lld\n",tich);
	}
	return 0;
}
