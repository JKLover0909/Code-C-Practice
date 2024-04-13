#include<iostream>
using namespace std;
int main() {
	int a;
	cin >>a;
	while(a--){
		int b, c, d;
	    cin >>b;
	    c=b%10;
	    d=b;
	    while(b>9){
	    	b/=10;
	    	c=c*10+(b%10);
}  if(c==d) cout << "YES" <<"\n";
else cout << "NO" <<"\n";
}}
