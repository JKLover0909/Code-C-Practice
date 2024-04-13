#include<bits/stdc++.h>
using namespace std;
int n, a[105][105], b[105][105];
int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j =1; j<=n; j++){
			cin >> a[i][j];
		}
	}
	for(int i =1; i<=n; i++){
		b[i][1] = a[i][1];
		b[0][i] = b[n+1][i] = 0;
	}
	
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n;i++){
			b[i][j] = a[i][j]+max({b[i][j-1],b[i-1][j-1],b[i+1][j-1]});
		}
	}
	int ans = -1e9;
	for(int i = 1; i<=n; i++){
		ans = max(ans,b[i][n]);
	}
	cout << ans;
}