#include<bits/stdc++.h>
using namespace std;

void in (int a[], int n){
	for(int i = 1; i<=n; i++){
		cout << a[i]<<" ";
	}
	cout <<endl;
}

bool check(int a[], int n){
	for(int i = 1; i<=n; i++) {if(a[i]==0) return 0;}
	return 1;
}


int main(){
	int n,b; cin >> n;
	int a[n+1]={0};
	in(a,n);
	while(!check(a,n)){
	    for(int i = n; i>=0; i--){
			if (a[i]==0) {
	            for(int y = i; y<=n;y++){
	            	if(a[y]==0) {a[y]=1;}
					else {a[y]=0;}
				}
				in(a,n);
				break; 
			}
		}	
	}
}