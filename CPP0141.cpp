#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long x)
{
    int s = sqrt(x);
    return (s * s == x);
}
bool isFibonacci(long long n)
{
    return isPerfectSquare(5 * n * n + 4)
           || isPerfectSquare(5 * n * n - 4);
}

int main(){
	int T; cin>> T;
	while(T--)
	    {
		long long n; cin >> n;
		if(n==0) cout <<"NO"<<endl; else{
		isFibonacci(n) 
		? cout <<"YES"<<endl
		: cout << "NO"<<endl;
	    }}
}