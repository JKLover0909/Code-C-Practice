#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a ,&b);
	for(int x=0;x<a;x++){
		for(int y=1;y<=b;y++){
			if(x+y<=b)
			printf("%c",64+x+y);
			else 
			printf("%c",64+b-y+1);	
		} printf("\n");
	}
}
