#include<bits/stdc++.h>
using namespace std;
 
 long long fbc(int i){
    if ( i==1 || i == 2) return 1;
    else return fbc(i-1)+fbc(i-2);
 }

 int main() {
    int a; cin >> a;
    while(a--){
        int b; cin >> b;
        cout << fbc(b) << endl;
    }
 }
