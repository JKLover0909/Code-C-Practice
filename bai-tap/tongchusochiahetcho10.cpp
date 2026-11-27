#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		c=0;
		while(b>0){
		//for(int d=b;d>9;d%=10){
			c=c+(b%10);
			b=b/10;
		}
		if(c%10==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
	}
}
