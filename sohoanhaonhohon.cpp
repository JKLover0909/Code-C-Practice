#include<stdio.h>
#include<math.h>
long long shh(int a)
{
	int sum=0;
	int i;
	for (i=1;i<=a/2;i++)
	{
		if (a%i==0)
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int m;
	scanf("%d",&m);
	if (m<8128)
	{
		for (int j=6;j<=m;j++)
		{
			if (shh(j)==j)
			printf("%d\t",j);
		}
	}
	else
	printf("6 28 496 8128");
	return 0;
}