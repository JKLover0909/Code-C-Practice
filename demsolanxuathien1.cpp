#include<stdio.h>
int main(){
	int a, b[100], f[100];
	scanf("%d",&a);
	for (int i=0;i<a;i++){
		scanf("%d",&b[i]);}
		for (int i=0;i<a;i++){
		f[i]=b[i];}
	for (int x=0;x<a;x++){
		for (int y=x+1;y<a;y++){
			if (b[x]==b[y]){
				for(int k=y;k<a-1;k++){
					b[k]=b[k+1];}
				a--;
				y--;}
			}}
	/*for (int i=0;i<a;i++){
		printf("%d ",b[i]);
	} printf("\n");
	int f[100];
	for (int i=0;i<7;i++){
		scanf("%d",&f[i]);}*/		
						
	for (int i=0;i<a;i++){
		int c = 0;
		for (int y=0;y<7;y++){
		if(f[y]==b[i])
		{ c+=1; }}
		printf("%d %d\n",b[i] ,c);}
	}		
		

