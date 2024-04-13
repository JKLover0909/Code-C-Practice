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
int tetz(long long a){
    int c=a/10;
    while (c>0) {int b=a%10; if (b<c%10) { b =c%10; c/=10; } else {return 0; break;
	}} if (a==0) return 1;
	} 
int tet(long long a){
    int c=a/10; 
    while (c>0) {int b=a%10; if (b>c%10) { b =c%10; c/=10; } else {return 0; break;
	}} if (a==0) return 1;
	}
int main() {
	int a;
	cin >> a;
	while(a--){
		int b;
		cin >> b;
		int c=0;
		for ( int i=pow(10,b-1); i<pow(10,b) ;i++){
			if (test(i)==1){
			if ((tet(i)==1)||(tetz(i)==1)) {cout<< i <<endl; c+=1;}}
		} cout << c << endl;
	}
}
