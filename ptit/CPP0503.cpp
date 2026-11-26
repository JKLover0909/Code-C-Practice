#include<bits/stdc++.h>
using namespace std;
struct PhanSo {
	long long a, b;
};

void nhap(PhanSo&p){
	cin >> p.a >> p.b;
}

void rutgon (PhanSo&p){
	long long i = __gcd(p.a, p.b);
		p.a = p.a / i;
		p.b = p.b / i; 
}

void in (PhanSo&P){
	cout << P.a <<" "<<P.b<<endl;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
