#include<stdio.h>
int main(){
	int a, b[100], d;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);}
	for(int x=0;x<a;x++){	
	for(int y=x+1;y<a;y++){
		if(b[x]>b[y]){
			d=b[y];
			b[y]=b[x];
			b[x]=d;}}
	printf("%d ",b[x]);}}		
