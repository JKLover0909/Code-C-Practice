#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		
	friend istream &operator >> (istream &is, PhanSo&a){
		cin >> a.tu >> a.mau;
		return is;
	}
	friend ostream &operator << (ostream &os, PhanSo&a){
		cout << a.tu <<"/"<<a.mau;
		return os;
	}  
	void rutgon(){
		long long gcd=__gcd(tu,mau);
		tu=tu/gcd;
		mau=mau/gcd;
	}  	
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
