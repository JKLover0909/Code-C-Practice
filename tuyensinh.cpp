#include<bits/stdc++.h>
using namespace std;
struct thisinh{
	string msv;
	string ten;
	float a,b,c,d;
};
int main(){
	thisinh A;
	cin >> A.msv;
	cin.ignore();
	getline(cin, A.ten);
	A.d=0;
	if (A.msv[2]=='1') A.d = 0.5;
	if (A.msv[2]=='2') A.d = 1;
	if (A.msv[2]=='3') A.d = 2.5;
    cin >>A.a >>A.b >>A.c;
	cout <<A.msv << " "<<A.ten <<" "<< A.d <<" "<< 2*A.a+A.b+A.c <<" ";
	if(2*A.a+A.b+A.c+A.d>=24) cout <<"TRUNG TUYEN";
	else cout <<"TRUOT";	
}