#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten, namsinh;
	float a, b, c;
};

void nhap(ThiSinh&A){;
	getline(cin,A.ten);
	getline(cin,A.namsinh);
	cin>>A.a >> A.b >> A.c;
}

void in(ThiSinh&A){
	float d;
	d=A.a+A.b+A.c;
	cout << A.ten <<" "<< A.namsinh <<" " << fixed 
	<< setprecision(1)<< d <<endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
