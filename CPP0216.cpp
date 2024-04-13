#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while(T--){
	int n;
	int demtang = 0;
	int demgiam = 0;
	long long A[n];
	for(int i = 0; i<n; i++)
	{
		cin >> A[i];
	}
	int L, R; cin >> L >> R;
	int max = A[L]; 
	int x = L;
	for(int i = L+1; i<=R; i++){
		if (A[i]>max) {
		A[i]=max;
		x = i;} 
	}if(x!=L){
	for (int i = L; i<x;i++){
		if(A[i]>A[i+1]) demtang++;
	}}
	if(x!=L){
	for (int i = x; i<R;i++){
		if(A[i]<A[i+1]) demgiam++;}}
	if(demtang == 0 && demgiam == 0) cout <<"Yes"<<endl;
	else cout <<"No"<<endl;
}
}