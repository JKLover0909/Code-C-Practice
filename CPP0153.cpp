#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin >> a;
	while(a--){
		int b, c, d=0;
		cin >> b >>c;
		for (int i=1; i<=b; i++){
			d+=i%c;
		} if(d==c) cout <<"1"<<endl; else cout <<"0"<<endl;
}}