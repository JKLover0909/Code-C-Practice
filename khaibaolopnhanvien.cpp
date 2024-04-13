#include<bits/stdc++.h>
using namespace std;
class NhanVien {
	private :
		string ten, gioitinh, diachi, mst;
		int a1, b1, c1, a2, b2, c2;
	public : 
	    friend istream & operator >> (istream &is, NhanVien &a){
	getline(is, a.ten);
	is >> a.gioitinh;
	scanf("%d/%d/%d",&a.a1, &a.b1, &a.c1);
	is.ignore();
	getline(is,a.diachi);
	is >> a.mst;
	scanf("%d/%d/%d",&a.a2, &a.b2, &a.c2);
	return is;
}
		friend ostream & operator << (ostream &os, NhanVien a){
    os<< "00001" <<" "<< a.ten <<" "<<a.gioitinh<<" ";
    printf("%02d/%02d/%04d",a.a1, a.b1, a.c1);
	os<<" "<<a.diachi<<" "<<a.mst<<" ";
	printf("%02d/%02d/%04d",a.a2, a.b2, a.c2);
	os << endl;
    return os;
}	
};


int main(){
	NhanVien a;
	cin >> a;
	cout << a;
	return 0;
}