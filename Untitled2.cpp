#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int a; cin >> a;
	while (a--){
		int b, c;
		cin >> b >> c;
		int d[b];
		for (int i=0; i<b ; i++){
			cin >> d[i];
		}
		sort( d, d+5);
		for (int i=b-1; i>=b-3 ; i--){
		     cout << d[i] << " "; }	    
}}
