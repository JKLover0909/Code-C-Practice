#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	scanf("%d",&a);
	b=0;
	c=0;
	while (a>0){
		if(a%2==0){
			c=c+1;
		}
		else{
		b=b+1;
	}
	a=a/10;
	}
	printf("%d %d",b ,c);
}
