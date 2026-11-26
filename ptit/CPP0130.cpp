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
		int b;
		cin >> b;
		if (test(b)==1) {cout << b << endl; continue;}
		else 
		for (int i=sqrt(b); i>=2; i--){
			if((test(i)==1)&&(b%i==0))
			{cout << i << endl; break;}} 
}}
