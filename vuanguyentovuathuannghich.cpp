#include<stdio.h>
#include <math.h>
int SNT(int x){
	if (x<=1){
		return 0;
	}
	else if (x==2){
		return 1;
	}
	else 
	for(int i=2; i<x; i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

int STN(int x){	
	int a;
	a = x;
	while (x>9) {
		x/=10;}
		if (x==a%10) {
			return 1;
		} else {
			return 0;		
}  
}


int main(){
	int x,y,z;
	scanf("%d",&z);
	while (z--){
	scanf("%d%d",x ,y)
	for (int i=x;i<=y;i++){
		if ((SNT(i)==1)&&(STN(i)==1))
			printf("%d\t",i);
		}
	}
	}
}
