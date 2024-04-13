#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		int b[n];
    for(int i = 0; i<n; i++){
    	cin >> b[i];
	}
	int k = n;
	for(int i = 0; i<k; i++){
		cout<<"[";
		for(int y = 0; y<n; y++){
			if(y==n-1) cout << b[y];
			else{cout<<b[y]<<" ";}
			b[y] = b[y]+b[y+1]; 
		}
		cout <<"]"<< endl;
		n--;
	}
	cout << endl;
    }
}