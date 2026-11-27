#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, M; 
    cin >> N >> M;
    long long a[N+1][M+1];
    for(long long i = 1; i<=N; i++){
        for(long long j = 1; j<=M; j++){
            cin >> a[i][j];
        }
    }
    int t; cin >> t;
    while(t--){
        int l; cin >> l;
        long long tong = 0;
        if(l==1){
            int x, y, z;
            cin >> x >> y >> z;
            for(int i=y; i<=z; i++){
                tong += a[x][i];
                cout << tong <<" ";
            }
        cout << endl; 
		tong = 0;       
        }
        if(l==2){
            int v, t, u;
            cin >> u >> v >> t;
            for(int i=v; i<=t; i++){
                tong += a[i][u];
                cout << tong <<" ";
            }  
        cout << endl; 
		tong = 0; 
        } 
    }
}