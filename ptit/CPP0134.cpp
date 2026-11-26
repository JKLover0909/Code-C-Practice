#include<bits/stdc++.h>
using namespace std;
int test(long long a){
	if (a<2)
	return 0;
	else if
	 ( a==2)
	return 1; 
    for (  int i=2; i<=sqrt(a);i++){
    	if (a%i==0) return 0;
	} return 1;
}
int main() {
	int a;
	cin >> a;
	while(a--){
		long long b, d;
		cin >> b >> d;
		if (test(b)==1) {  if(d==1) { cout << b << endl; continue;} else {cout << "-1" << endl; continue;
		} }
		else {
		long long c=b;
		int dem=0;
		long long max;
		for (long int i=2; i<=sqrt(c); i++){
			if(test(i)==1){
			{while(b%i==0){ dem+=1; b/=i; max=i;}}
			} if(dem==d) { cout << i << endl; break;}   
			} if((test(b)==1)&&(b>max)){ if(d==dem+1) {cout << b << endl;} else if(d>dem+1) cout << "-1" << endl;
			} else if (d>dem) cout << "-1" << endl;
	
	} }
}
