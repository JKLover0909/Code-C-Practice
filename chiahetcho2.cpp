#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d",&a);
    while (a--){
    	c=0;
    	scanf("%d",&b);
    	for (int i=1;i<=b/2;i++){
    		if ((b%i==0)&&(i%2==0))
    		c+=1;
		} printf("%d\n",c);
	}}
