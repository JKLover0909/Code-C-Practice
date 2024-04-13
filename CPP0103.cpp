#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	long int a, b, c;
	cin >> a;
	c=0;
	for(int x=1;x<=a;x++){
		b=1;
		for(int y=1;y<=x;y++){
			b*=y;
		}c+=b;
	} cout << c;}
