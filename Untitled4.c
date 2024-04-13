#include<stdio.h>
	int main(){
		int n, m, i, j;
		scanf("%d%d", &n, &m);
		for(i=1; i<=n; i++){
			if(n<=m){
				for(j=i; j<=m; j++){
					printf("%c", j+64);
				}
				for(j=i-1; j>=1; j--){
					printf("%c", j+64);
				}
			}
			if(n>m){
				if(i<=m){
					for(j=i; j<=m; j++){
						printf("%c", j+64);
					}
					for(j=i-1; j>=1; j--){
						printf("%c", j+64);
					}
				}
				else{
					for(j=m; j>=1; j--){
						printf("%c", j+64);
					}
				}
			}
			printf("\n");
		}
	}
