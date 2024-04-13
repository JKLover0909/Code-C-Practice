#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int A[n][n];
    	map<int,int> mp;
    	for(int i = 0; i<n; i++){
    		for(int y = 0; y<n; y++){
    			cin >>A[i][y];
		    }
	    }
    	for(int i = 0; i<n; i++){
    		for(int y = 0; y<n; y++){
    			if(mp[A[i][y]]<i+1) mp[A[i][y]]++;
		    }
	    }
	int d=0;
	for (auto x : mp){if(x.second==n) d++; }
	cout <<d<< endl;
    }
}    