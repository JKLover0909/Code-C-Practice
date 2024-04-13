#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	map<char, int> mp;
	for(int i = 0; i<s.size(); i++){
		mp[s[i]]++;
	}
	pair<char, int>	ans1=*mp.begin; ans2 = ans1; ans3 =ans1;
	for( auto x : mp){
		if (x.second > ans1.second)
		ans1=x;
		if (x.first < ans1.first)
	}
	cout << ans1.second <<endl;
}
