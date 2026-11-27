#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d",&a);
	b=a-1;
	c=2*a-1;
	for(int i=1; i<=a; i++){
		for (int j=1; j<=c; j++){
			if(j<=b){
				printf("~");
			}
			else if (j==(b+1)||i==1||j==c||i==a){
				printf("*");
			}
			else{
				printf(".");
			}
		}
		printf("\n\n");
		b=b-1;
		c=c-1;
	}
}
