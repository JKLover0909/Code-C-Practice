#include<bits/stdc++.h>
using namespace std;
class PhanSo{

		
	public:
		long long tu, mau;
		PhanSo(long long tu, long long mau){
			this->tu= tu;
			this->mau = mau;
		}
	friend istream &operator >> (istream &is, PhanSo&a){
		cin >> a.tu >> a.mau;
		return is;
	}
	friend ostream &operator << (ostream &os, PhanSo a){
		cout << a.tu <<"/"<<a.mau;
		return os;
	}
	PhanSo operator + (PhanSo b){
	    PhanSo a();
		tu=tu*b.mau+mau*b.tu;
		mau=mau*b.mau;
		a.rutgon();
		return a();
    }
	void rutgon(){
		long long gcd=__gcd(tu,mau);
		tu=tu/gcd;
		mau=mau/gcd;
	}  	
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
