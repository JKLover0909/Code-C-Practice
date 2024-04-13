#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int sochan(int x) {
	while(x>0){
	if(x%2==0)
	return 1;
	else
	return 0;
	x/=10;
	}
}

int main(){
    int z;
    scanf("%d", &z);
    while(z--){
	scanf("\n");
	char a[1000];
	gets(a);
	if (strcmp((strrev(a)), a) == 0){
		long long x = atoll(a);
		if (sochan(x)==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}}}}
