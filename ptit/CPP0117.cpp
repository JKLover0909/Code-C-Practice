#include<bits/stdc++.h>
using namespace std;
int ul(int a, int b){
	if(b==0) return a;
	return ( b, a%b);
	}

int main() {
    int a;
    cin >> a;
    while(a--){
  	    int b, c;
 	    cin >> b >> c;
 	    cout << (b*c)/ul(b,c) <<" "<< ul(b,c);
		cout << endl;}  
}


