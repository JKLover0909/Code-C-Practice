#include<stdio.h>
#include<math.h>
int Prime(int x){
	if (x==0||x==1)
	return 0;
	else if (x==2||x==3)
	return 1;
	else
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0)
		return 0;
		return 1;
	}
}
int main(){
	int a, b, Num[100];
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		for (int i=0;i<b;i++){
			scanf("%d",&Num[i]);
		} for (int y=0;y<b;y++){
			if (Prime(Num[y])==1)
			printf("%d\t",Num[y]);
		}   printf("\n");
	} return 0; }
