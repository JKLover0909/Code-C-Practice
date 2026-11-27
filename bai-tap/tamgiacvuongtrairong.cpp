#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a );
	for(int i=1; i<=a; i++){
		for (int j=1; j<=a; j++){
			if(i>j||i==j){
				if(j==1||i==j||i==a){
				printf("*");
			}
			    else{
			    	printf(".");
				}
			}
			else{
				printf(" ");
			}
		}
		printf("\n\n");
	}
}
