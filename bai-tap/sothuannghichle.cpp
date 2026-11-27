/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
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
int tcs(long long a)
{
	int tong=0;
	while (a>0)
	{
		tong=tong+a%10;
		a=a/10;
	}
	return tong;
}
int nts(long long n)
{
	int du;
	while (n > 0)
	{
		du = n % 10;
		n /= 10;
		if (du%2==0)
			return 0;
	}
	return 1;
}
int main()
{
	long long n,a;
	scanf("%lld",&n);
	while (n--)
	{
		scanf("%lld",&a);
		if (tn(a)==1&&tcs(a)%2==1&&nts(a)==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}