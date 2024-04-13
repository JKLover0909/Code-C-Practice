#include<bits/stdc++.h>
using namespace std;
#define ll long long

int tien(string a, int b) {
	if (a == "Xe_con"){
		if(b == 5) return 10;
		else 
		return 15;
	}
	if (a == "Xe_khach"){
		if (b == 29) return 50;
		else
		return 70;
	}
	return 20;
}

void tinhtien() {
	map<string, ll>inra;
	int n;
	cin >> n;
	while(n--){
		string biensoxe, loaixe, vaora, ngay;
		int chongoi;
		cin >> biensoxe >> loaixe;
		cin >> chongoi;
		cin >> vaora >>ngay;
		if (vaora == "IN"){
			inra[ngay] += tien(loaixe, chongoi);}
		else
			inra[ngay] += 0;
	}
	for (auto i : inra) {
		cout <<i.first <<": "<<i.second*1000 <<endl;	
	}
}

int main(){
	int t = 1;
	while(t--){
		tinhtien();
	}
}
