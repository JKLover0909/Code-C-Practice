#include<stdio.h> 
int main()
{
	int m, n, s, i, g, h;
	scanf("%d%d",&n,&m);
	if (n>m){
		s=0;s=n;n=m;m=s;
	}
	g=0;
	for(i=n;g<(m-n+1);i++){
		g=g+1;
		h=h+i;
	}
	printf("%d",h);
}
