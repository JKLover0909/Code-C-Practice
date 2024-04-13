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
	int n,a,b,c,d;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf ("%d%d%d%d",&a,&b,&c,&d);
		if (ucln(a,b)==ucln(c,d))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}