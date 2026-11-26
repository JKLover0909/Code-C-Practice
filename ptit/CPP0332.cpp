#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){ s[i]=tolower(s[i]);}
	string tmp;
	vector<string> a;
	stringstream ss(s);
	while(ss>>tmp){ a.push_back(tmp); }
	int x = a.size();
	for(int i=0;i<x-2;i++){ a[i][0]=toupper(a[i][0]); cout<<a[i]<<" "; }
	a[x-2][0]=toupper(a[x-2][0]);
	cout <<a[x-2];
	for(int i = 0; i < a[x-1].length();i++){
	a[x-1][i]=toupper(a[x-1][i]);}
    cout <<", "<<a[x-1];
}
