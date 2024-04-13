#include<bits/stdc++.h>
using namespace std;
int sochan (string s){
	for (int i = 0; i<s.length();i++){
		if(s[i]%2==1) return 0;	
	} return 1;
}

int sochanle (string s){
    for (int i = 0; i< s.length();i++){
    	if(s[i]!=s[s.length()-1-i]) return 0;
    	
	} return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		if( sochan(s) == 1 && sochanle(s)==1) cout<<"YES\n"; else cout<<"NO\n";	}
} 