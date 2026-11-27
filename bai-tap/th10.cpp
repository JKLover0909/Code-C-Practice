#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD=(int) 1e9+7;
ll gcd(ll a,ll b) {
	ll r;
	while(b) {
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;cin>>n;
		map<int ,int>m;
		int a[n];
		int r=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			m[a[i]]++;
		}
		
		int k=0;
		for(int i=0;i<n;i++) {
			if(m[a[i]]>1){
				cout<<a[i]<<endl;
				k=1;
				break;
			}
		}
		if(!k) cout<<"NO"<<endl;
	}
}
