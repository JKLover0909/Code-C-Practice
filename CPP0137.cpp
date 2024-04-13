#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while(T--){
		long long N, p; cin >> N >> p;
		int x=p;
		int dem = 0 ;
		while(x<N){
		dem+= N/x;
		x*=p;}
	    cout <<dem<<endl;
    }
}

