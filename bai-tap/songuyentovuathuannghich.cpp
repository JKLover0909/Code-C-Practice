/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
#define test long long t; scanf("%lld", &t); while (t--)
int tn ( long long n ) 
{
    long long m=n;
    long long songuoc=0;
    while (m>0) 
    {
        songuoc = songuoc * 10 + m % 10;
        m = m / 10;
    }
    if ( songuoc == n ) return 1;
    return 0;
}
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
int main()
{
	test
	{
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for (int i=a;i<=b;i++)
		{
			if (tn(i)==1&&snt(i)==1)
			{
				dem++;
				if (dem==11)
				{
					printf("\n%d ",i);
					dem=1;
				}
				else
				printf("%d ",i);	
			}
		}
		printf("\n\n");
	}
	return 0;
}
