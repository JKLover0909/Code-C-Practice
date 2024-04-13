/* NGUYEN TUAN KIET
B21DCCN472
D21CQCN04-B
NHOM 26 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=2*i+1;j<=2*n-1;j=j+2)
		printf("%c",j+64);
		printf("\n");
	}
	return 0;
}