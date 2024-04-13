#include<bits/stdc++.h>
using namespace std;
int only1(int a){
	while(a>9){
	int b=0;
		while(a>0){
		b+=a%10;
		a/=10;
	    }a=b; 
	}
}
int main() {
    int a;
    cin >> a;
    while(a--){
  	    int b;
 	    cin >> b;
 	    cout << only1(b);
		cout << endl;}  
}


