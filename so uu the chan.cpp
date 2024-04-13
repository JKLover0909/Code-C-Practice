#include<stdio.h>
int main(){
	int a, b;
	scanf("%d",&a);
	while (a--){
		scanf("%d",&b);
		int c, d;
		while(b>0){
			c=0;
			d=0;
			if((b%10)==0)
			continue;
			else if ((b%10)%2==0)
			c++;
			else 
			d++;
		b/=10;	
		} if (c>d)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
