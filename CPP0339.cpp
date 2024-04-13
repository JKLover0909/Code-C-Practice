#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	cin.ignore();
	string str;
	cin >> str;
	int s = str.size();
	int x = 0;
	for(int i = 0 ; i <s ; i++){
		for (int y = i; y<s; y++ ){
			if(str[i] == str[y]) x++;
		}
	}
	cout << x << endl;
}}
