#include<iostream>
using namespace std;
int main() {
	int a;
	cin >>a;
	while(a--){
		char b;
		cin >>b;
		if ((64<b) && (b<91))
		{ b+=32; }
		else 
		b-=32;
		cout << b <<"\n";
	}
}
