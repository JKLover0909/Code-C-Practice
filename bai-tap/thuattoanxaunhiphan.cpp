#include<bits/stdc++.h>
using namespace std;

int a[10001],n;

bool check2(){
	for (int i = 0; i<=n/2; i++){
		if (a[i]!=a[n-1]) return 0;
	}
	return 1;
}

bool check(){
	for (int i = 0; i<n; i++){
		if (a[i]==0) return 1;
	}
	return 0;
}

void sinh() {
	for(int i = n-1; i>=0; i--){
		if (a[i]==0) {
	        a[i] = 1;
	        for (int y = i+1; y<n ;y++){
	    	    a[y]=0;
		    }
		return;    
		}
}}

int main()
{
cin >> n;
for (int i = 0; i<n; i++){
		a[i]=0;
	}
while(check()){
	if (check2()){
	for (int i = 0; i<n; i++){
		cout << a[i];}}
	cout << endl;	
    sinh();	
}

	for (int i = 0; i<n; i++){
		cout << a[i]<<" ";	
}}