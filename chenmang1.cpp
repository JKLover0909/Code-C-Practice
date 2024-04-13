#include<stdio.h>
int main(){
	int a, b, c[100], d[100];
	scanf("%d %d",&a ,&b);
	printf("\n");
	for (int i=0;i<a;i++){
	scanf("%d",&c[i]);}
	printf("\n");
	for (int i=0;i<b;i++){
	scanf("%d",&d[i]);}
	printf("\n");
	int e;
	scanf("%d",&e);
	for(int i=0;i<e;i++){
		printf("%d\t",c[i]);}
	for(int i=e;i<b+e;i++){
	    printf("%d\t",d[i-e]);}
	for(int i=e;i<a;i++){
	    printf("%d\t",c[i]);}		 
}
