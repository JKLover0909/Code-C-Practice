#include<stdio.h>
int main(){
	int a, b[100];
	scanf("%d",&a);
	for (int i=0;i<a;i++){
		scanf("%d",&b[i]);}
		b[a] = b[0];
		b[a+1] = b[1];
	for (int i=1;i<a;i++){
		if(b[i]<b[a])
		b[a] = b[i];}
	for (int i=1;i<a;i++){
		if((b[i]<b[a+1])&&(b[i]!=b[a]))
		b[a+1] = b[i];}
		
	printf("%d %d",b[a] ,b[a+1]);}
		
