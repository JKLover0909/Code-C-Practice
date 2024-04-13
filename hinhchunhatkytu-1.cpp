#include<stdio.h>
int max(int x ,int y){
	if (x>y)
	return x;
	else 
	return y;
}
int main() {
    int a, b;
    scanf("%d%d" ,&a ,&b);
    if(a>b)
    for(int x=a;x>0;x--){
    	for(int y=a;y>a-b;y--){
    		printf("%c",max(x,y)+96);
		} printf("\n"); 
	} else
	for(int x=b;x>b-a;x--){
    	for(int y=b;y>0;y--){
    		printf("%c",max(x,y)+96);
		} printf("\n");    
}}
