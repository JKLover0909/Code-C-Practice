#include<stdio.h>
int main(){
	int a, b, c[100];
	scanf("%d",&a);
	while (a--){
		scanf("%d",&b);
			for (int i=0;i<b;i++){
				scanf("%d",&c[i]);}
				int max=c[0];
				for (int i=0;i<b;i++)
				{ if(c[i]>c[i-1])
				max=c[i];}
				printf("%d\n",max);
				for (int i=0;i<b;i++){
					if(c[i]==max)
					printf("%d\t",i);
						 
	}
}}
