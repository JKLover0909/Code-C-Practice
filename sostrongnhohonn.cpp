#include<stdio.h>
#include<math.h>
long long gt(int n)
{
    if (n == 0)
    return 1;
    else
    return n * gt(n - 1);
}

long long ktt(int a)
{
	long long sum=0;
	int d,temp=a;
	while (temp>0)
	{
		d = temp%10;
		sum= sum + gt(d);
		temp=temp/10;
	}
	return sum;
}
int main()
{
	int m;
	scanf("%d",&m);
	printf("1\t2\t");
	if (m>=145)
	{
		for (int i=145;i<=m;i++)
		{
		if (ktt(i)==i)
		printf("%d\t",ktt(i));
		}
	}
	return 0;
}