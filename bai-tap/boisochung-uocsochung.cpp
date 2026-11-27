#include<stdio.h>
#include<math.h>
int ucln(int a,int b)
{
	if (b==0)
	return a;
	return ucln(b, a % b);
}
int main()
{
	int n,a,b;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		printf("%lld\t",(long long)a*b/ucln(a,b));
		printf("%lld\n",ucln(a,b));
	}
	return 0;
}