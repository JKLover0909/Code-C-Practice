#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k; cin >> n >> k;
	long long A[n];
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	while(n--){
		long long tmp;
		cin >> tmp;
		pq.push(tmp);
	}
	long long res = sum(pq,pq+k);
	cout << res << endl
}