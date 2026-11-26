#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
    cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int K; cin >> K;
		int B[26] = {0};
		for(int i=0; i<s.length();i++){
			B[s[i]-'a']++;
		}
		int count=0;
		for(int i=0; i<26; i++){
			if( B[i] == 0 ) { count ++;
			}
		}
		if (K<count) {cout <<"0"<<endl;}
		 else {
		cout << "1"<<endl;}
	} 
}
