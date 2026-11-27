/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n; scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int k=1;k<=i*2-1;k=k+2)
		printf("%d",k);
		for (int z=i*2-3;z>=1;z=z-2)
		printf("%d",z);
		printf("\n");
	}
	return 0;
}