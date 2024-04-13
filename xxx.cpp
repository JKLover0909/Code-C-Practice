#include<bits/stdc++.h>
using namespace std;

const long long maxn = 1000005 ;

int n, m;
vector<pair<long long,long long>> adj[maxn];
bool used[maxn];

void nhap(){
	cin >> n >> m;
	for(int i = 0; i<=n; i++){
		adj[i].clear();
	}
	memset(used, sizeof(used), false);
	for(int i = 0; i<m; i++){
		long long x, y, w;
		cin >> x >> y >> w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
}

void prim(int u){
	priority_queue< pair<long long,long long> ,vector<pair<long long,long long>>, greater<pair<long long,long long>>> Q;
	Q.push({0, u});
	int res = 0;
	while(!Q.empty()){
		pair<long long,long long> top = Q.top(); Q.pop();
		long long dinh  = top.second; long long trongso = top.first;
		if(used[dinh]) continue;
		res+=trongso;
		used[dinh] = true;
		for(auto it : adj[dinh]){
			long long y = it.first; long long w = it.second;
			if(!used[y]){
				Q.push({w, y});
			}
		}
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		prim(1);
	}
}