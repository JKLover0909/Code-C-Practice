#include<bits/stdc++.h>
using namespace std;
int test(long long a){
	if (a<2)
	return 0;
	else if
	 ( a==2)
	return 1; 
    for (  int i=2; i<=sqrt(a);i++){
    	if (a%i==0) return 0;
	} return 1;
}

int main(){
	long long i;
	cin >> i;
	if ( test(i)==1) cout << "YES"; else cout << "NO";
}
