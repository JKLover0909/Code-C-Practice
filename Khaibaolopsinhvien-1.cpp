#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ten, msv, lop; 
		int d, m, y;
		float gpa;
	public:
	    SinhVien();
		void nhap();
		void xuat();	
};

SinhVien::SinhVien(){
	this-> msv = "B20DCCN001";
	this->gpa =0;
	this->lop ="";
	this->ten ="";
	this->d =0;
	this->m =0;
	this->y =0;
}

void SinhVien::nhap(){
	getline(cin,ten);
	getline(cin,lop);
	scanf("%d/%d/%d", &d, &m, &y);
	cin >> gpa;
}

void SinhVien::xuat(){ 
    cout<<msv<<" "<<ten<<" "<<lop<<" ";
	printf("%02d/%02d/%04d",d,m,y);
	cout<<" "<<fixed<<setprecision(2)<<gpa;
}
	
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}