#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j, a;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	a=0;
    	for(j=1;j<=i;j++){
    		if(j==1){
    			printf("%d\t", i);
			}
			else{
				printf("%d\t", i+(n-j+1)+a);
				a=(n-j+1)+a;
			}
		}
		printf("\n");
	}
	return 0;
}
