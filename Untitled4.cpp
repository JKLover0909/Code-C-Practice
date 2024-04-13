#include<bits/stdc++.h>
using namespace std;
bool a(int x){
	int s = sqrt(x);
	return ( s* s == x);
}
 bool d(int n){
 	return a( 5* n * n + 4)
 	  || a( 5*n*n -4); 
 }
 
int main() {
	int a;
	cin >> a;
	while (a--) {
		int b; cin >> b;
		d(b) 
		  ? cout << "YES\n"
		  : cout << "NO\n";
	}
}

