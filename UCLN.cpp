#include<stdio.h>
int main()
{
	int i, n, m;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		for(i=2;i<m;i++){
			if (m%i==0){
				printf("%d",i);
				printf(" \n");
            }
		}
	}
}
