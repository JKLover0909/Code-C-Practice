/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
int snt(int a)
{
	if (a < 2)
	return 0;
	if (a < 4)
	return 1;
	if (a % 2 == 0 || a % 3 == 0)
	return 0;
	for (int i = 5; i <= sqrt(a); i += 6)
	{
		if (a % i == 0 || a % (i+2) == 0)
		return 0;
	}
	return 1;
}
int stn(int a)
{
	int b;
	while (a>0)
	{
		b=a%10;
		a=a/10;
		if (b!=2&&b!=3&&b!=5&&b!=7)
		return 0;
	}
	return 1;
}
int main()
{
	test
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		for (int i=a;i<=b;i++)
		{
			if (snt(i)==1&&stn(i)==1)
			dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}