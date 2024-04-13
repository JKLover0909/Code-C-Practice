/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	for (int i=1;i<=a-1;i++)
	{
		for (int j=a;j>=a+1-i;j--)
		printf("%d",j);
		for (int k=1;k<=a-i;k++)
		printf("%d",a+1-i);
		for (int l=1;l<=a-i-1;l++)
		printf("%d",a+1-i);
		for (int z=i-1;z>=0;z--)
		printf("%d",a-z);
		printf("\n");
	}
	for (int x=a;x>=1;x--)
	printf("%d",x);
	for (int c=2;c<=a;c++)
	printf("%d",c);
	printf("\n");
	for (int i=a-1;i>=1;i--)
	{
		for (int j=a;j>=a+1-i;j--)
		printf("%d",j);
		for (int k=1;k<=a-i;k++)
		printf("%d",a+1-i);
		for (int l=1;l<=a-i-1;l++)
		printf("%d",a+1-i);
		for (int z=i-1;z>=0;z--)
		printf("%d",a-z);
		printf("\n");
	}
	return 0;
}