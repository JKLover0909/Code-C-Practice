#include <bits/stdc++.h>
using namespace std;
long long test(int a, int b){
	for (int i=0; i<=b-1; i++){
		if ((a*i)%b==1) { return i; break;
		} else return -1;
}}

int main() {
	int a; cin >> a;
	while(a--){
		int b, c;
		cin >> b >>c;
		cout <<test(b,c) << endl;
}}