#include <bits/stdc++.h>
using namespace std;
void cung(int a,int b){
	if (b==1){
		if (a>=1&&a<20) cout << "Ma Ket" << endl;
		else cout << "Bao Binh" << endl;
	}
	if (b==2){
		if (a>=1&&a<19) cout << "Bao Binh" << endl;
		else cout << "Song Ngu" << endl;
	}
	if (b==3){
		if (a>=1&&a<21) cout << "Song Ngu" << endl;
		else cout << "Bach Duong" << endl;
	}
	if (b==4){
		if (a>=1&&a<20) cout << "Bach Duong" << endl;
		else cout << "Kim Nguu" << endl;
	}
	if (b==5){
		if (a>=1&&a<21) cout << "Kim Nguu" << endl;
		else cout << "Song Tu" << endl;
	}
	if (b==6){
		if (a>=1&&a<21) cout << "Song Tu" << endl;
		else cout << "Cu Giai" << endl;
	}
	if (b==7){
		if (a>=1&&a<23) cout << "Cu Giai" << endl;
		else cout << "Su Tu" << endl;
	}
	if (b==8){
		if (a>=1&&a<23) cout << "Su Tu" << endl;
		else cout << "Xu Nu" << endl;
	}
	if (b==9){
		if (a>=1&&a<23) cout << "Xu Nu" << endl;
		else cout << "Thien Binh" << endl;
	}
	if (b==10){
		if (a>=1&&a<23) cout << "Thien Binh" << endl;
		else cout << "Thien Yet" << endl;
	}
	if (b==11){
		if (a>=1&&a<23) cout << "Thien Yet" << endl;
		else cout << "Nhan Ma" << endl;
	}
	if (b==12){
		if (a>=1&&a<22) cout << "Nhan Ma" << endl;
		else cout << "Ma Ket" << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a,b;
		cin >> a >> b;
		cung(a,b);
	}
}