#include<bits/stdc++.h>
using namespace std;
bool check (string a){
	long long r = 0;
	for (int i=0; i<a.length(); i++){
         r = 2*r + (a[i]-'0');}   
	if (r%5==0) return 1;
return 0;
}

int main(){
	int t; cin >>t;
	while(t--){
		string a;
		cin >> a;
		if (check(a)) cout <<"Yes"<<endl;
		else cout <<"No"<<endl;
	}
}