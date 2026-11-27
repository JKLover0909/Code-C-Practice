#include<stdio.h>
int main()
{
	int n,m,k,h;
	scanf("%d%d",&n,&m);
	k=m;
	for(int i=1;i<=n;i++)
	{	h=k-1;
		if(i<=k)
		{
			for(int j=1;j<=m;j++){printf("%d",j+i-1);}
			m--;
			for(int j=1;j<=k-m-1;j++){printf("%d",k-j);}
		}
		if(i>k)
		{
			for(int j=1;j==1;j++){printf("%d",i);}
			for(h;h>=1;h--){printf("%d",h);}
		}
		printf("\n");
	}
	return 0;
}
