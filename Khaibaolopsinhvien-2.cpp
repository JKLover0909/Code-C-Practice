#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
	    string msv,ten, lop;
	    int d, m, y;
	    float p;
public:
    friend istream &operator >> (istream &, SinhVien &a);
    friend ostream &operator << (ostream &, SinhVien &a);
};

istream &operator >> (istream &is, SinhVien &a)
{
    getline(is, a.ten);
    getline(is, a.lop);
    scanf("%d/%d/%d", &a.d, &a.m, &a.y);
    is >> a.p;
    return is;
}
ostream &operator << (ostream &os, SinhVien &a)
{
    os << "B20DCCN001 " << a.ten << " " << a.lop << " ";
    printf("%02d/%02d/%04d ", a.d, a.m, a.y);
    os << fixed << setprecision(2) << a.p;
    return os;
}
	
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}