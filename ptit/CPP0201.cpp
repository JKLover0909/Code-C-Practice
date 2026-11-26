#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin >> a;
	while(a--){
		int b; cin >>b;
		int c[b];
		for(int i=0; i<b; i++){
			cin >> c[i];
		}
		int n = sizeof(c)/sizeof(c[0]);
		sort(c,c+b);
		int min = abs(c[0] - c[1]);
		for (int i=1; i<b ;i++){if (abs(c[i]-c[i+1])<min) { min = abs(c[i]-c[i+1]);}
		} cout << min << endl;
		}
}