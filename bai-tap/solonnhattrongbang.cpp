#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d", &T);
	long long min1=10000001, min2=10000001;
	while(T--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		if(a<min1) min1=a;
		if(b<min2) min2=b;
	}
	printf("%lld", min1*min2);
	return 0;
}
