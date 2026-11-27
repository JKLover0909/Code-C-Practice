#include<stdio.h>
#include<math.h>
/*int Prime(int x){
	if (x<2)
	{ return 0; }
	else {
	for (int i=2;i<=sqrt(x);i++){
		if (x % i == 0)
		{ return 0;
		break; }
	} return 1;
}}*/
int main(){
	int a, b, Num[100];
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		int d=0;
		for (int i=1;i<=b;i++){
			scanf("%d",&Num[i]);
		} for (int y=1;y<=b;y++){
			if ((Num[y])==Num[b+1-y]){
				d+=1;
			}} if (d==b)
			printf("YES\n");
			else{
		  printf("NO\n");}
	} return 0; }
