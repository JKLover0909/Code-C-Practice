#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int Xmu (ll a, ll b, ll chiadu ){
	ll giatri=1;
	ll dem=0;
	ll x;
	while(b){
		if( b%2==1){
			x = pow(a,pow(2,dem));
			giatri *= (x % chiadu);
		}
		dem++; b/=2;}
		return giatri%chiadu;
	}
int main(){
	ll chiadu = 1e9+7;
	int T; cin >> T; while(T--){
		long long n, x; cin >> n >> x;
		long long tong = 0;
		int k = n; k--;
		long long P[n];
		for(int i = 0; i<n; i++){
		    cin >> P[i]; }
		for(int i = 0; i<n; i++){
			tong += (( P[i] *Xmu (x,k, chiadu ) ) % chiadu) +1ll;
			k--;
		}  
		cout << tong%chiadu <<endl;  
}}