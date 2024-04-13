#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		string s;
		cin >> s;
		int c;
		c = 0;
		n = s.length();
		for (int i=0;i<n;i++){
			if ((abs(s[i+1]-s[i])<=1)){ c++;}
			} if(c==n-1){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
			}
		}

