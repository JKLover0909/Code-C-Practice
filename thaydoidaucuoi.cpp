#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, n, d, m;
	scanf("%d",&c);
	a=c%10;
	n=0;
	b=c;
	do{
			c=c/10;
	n=n+1;
	}
	while (c>10);
    //printf("%d %d %d %d",a ,b ,c ,n);
    d=b+(a*pow(10,n))-(c*pow(10,n))-(a*pow(10,0))+(c*pow(10,0));
    printf("%d",d);
}



