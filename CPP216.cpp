#include<bits/stdc++.h>
using namespace std;
int max(int a[], int l, int r){
	int max = a[l], x = l;
	for(int i = l; i<=r; i++){
		if (a[i]>max) {
		max=a[i];
		x = i;}} 
		return x; 
}

int mountain(int a[], int l, int r) {
 	int x = max(a, l, r);
 	for (int i = l; i<x;i++){
		if(a[i]>a[i+1]) return 0;}
	for (int i = x; i<r;i++){
		if(a[i]<a[i+1]) return 0;}
	return 1;		
}
 
int main () {
	int T; cin >> T;
	while(T--){
		int n; cin >>n;
		int A[n];
	for(int i = 0; i<n; i++)
	{
		cin >> A[i];
	}
	int l, r;
	cin >> l >> r;
	if( mountain(A, l, r)) cout <<"Yes"<<endl;
	else cout <<"No" <<endl; 
    } 
}