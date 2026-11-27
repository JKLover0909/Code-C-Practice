#include<bits/stdc++.h>
using namespace std;

struct giaovien{

    string ma;
	string ten;
	long long luong;
	long long phucap;
	long long hesoluong;
};
int main(){
	giaovien a;
	cin >>a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >>a.luong;
	if(a.ma[1]=='T') a.phucap = 2000000;
	if(a.ma[1]=='P') a.phucap = 900000;
	if(a.ma[1]=='V') a.phucap = 500000;
	a.hesoluong = (a.ma[2]-'0')*10+(a.ma[3]-'0');
	cout <<a.ma <<" "<<a.ten<<" "<<a.hesoluong<<" "<<a.phucap<<" "<<a.hesoluong*a.luong+a.phucap;
}
