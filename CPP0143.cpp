#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin >> a;
	while(a--){
		int b; cin >> b;
		long long d=1, e=1, f ;
		if ( b==1 || b ==2 ) {cout << "1"<< endl;}
		else {for( int i=3; i<=b; i++) {
			f=d+e; e=d; d=f;
		}  cout << f<<endl;}
	}
}
