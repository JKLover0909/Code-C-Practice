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
	int a,i,j;
		scanf("%d",&a);
		for (j=2;j<=a;j++)
		{
			while(a%j==0)
			{
				if (a/j!=1)
				printf("%dx",j);
				else
				printf("%d",j);
				a=a/j;
			}
		}
		return 0;
}