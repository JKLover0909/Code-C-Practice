#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b){
	if(a%b!=0)
	return UCLN(b,a%b);
	else return b;
}

int SNT(int a){
	if(a<2) return 0;
	else { for(int i=2; i<=sqrt(a); i++){
		if(a%i==0) return 0;
	} 
	} return 1;
}


int main() {
	int T; cin >> T;
	while(T--){
		int x; cin >>x;
		int t=0;
		for(int i=1; i<=x; i++){
			if (UCLN(i,x) == 1) {
				t++;
			} 
		} (SNT(t) == 1) ? cout <<"1"<< endl
		: cout <<"0"<< endl;
	}
}