#include<bits/stdc++.h>
using namespace std;
bool a(long long x){
    if (n==0 || n== 1){
        return true;
    }
	long long f0 = 0, f1 =1, fn;
	for (int i = 2; i<= 93 ; i++){
	    fn = f0 + f1;
	    if(n == fn){
	        return true;
	    }
	    f0 = f1;
	    f1= fn;
	    }
	return false;
 }
 
int main() {
	int a;
	cin >> a;
	while (a--) {
		long long b; cin >> b;
		a(b) 
		  ? cout << "YES\n"
		  : cout << "NO\n";
	}
}
