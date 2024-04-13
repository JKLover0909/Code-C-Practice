#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		int b[n][n];
		for(int i = 1; i<=n; i++){
			cin >> b[1][i];
		}
		int k = n;
		n--;
		for(int i = 2; i<=k; i++){
			for(int y = 1; y<=n; y++){
				b[i][y]=b[i-1][y]+b[i-1][y+1];
			}
			n--;
		}
		int h=1;
		for(int  i = k; i>0; i--){
			cout << "[";
			for(int  y =1; y<=h; y++){
				if(y==h){
					cout << b[i][y];
				}
				else{
				cout << b[i][y]<<" ";
			}}
			h++;
			cout <<"]";
			cout <<" ";
		}
		cout <<endl;
    }
}