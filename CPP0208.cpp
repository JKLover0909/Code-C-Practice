#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin >> a;
	while(a--){
		int b, d; cin >>b>>d;
		int c[b];
		for(int i=0; i<b; i++){
			cin >> c[i];
		}
		int n = sizeof(c)/sizeof(c[0]);
		sort(c,c+b);
		cout << c[d-1] << endl;
		} 
		}
