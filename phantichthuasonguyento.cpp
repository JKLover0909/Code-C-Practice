#include<stdio.h>
#include<cmath>
int main()
{
	int n, m, s, i, k, h, g[h];
	scanf("%d%d",&n,&m);
	if (n>m){
		s=0;s=n;n=m;m=s;
	}
	h=0;
	for(i=n;i<=m;i++){
	     if	((double sqrt(i))%1==0){
	     	h=h+1;
	     	g[h]=i;
		 }
	}
	printf("%d\n",h);
	for(k=1;k<=h;k++){
		printf("%d\n",g[k]);
	}
}

