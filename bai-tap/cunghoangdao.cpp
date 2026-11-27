#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		switch (b){
			case 1 : 
			if (a >0 && a <=19 ) {
				cout << "Ma Ket" << endl;
			} else if ( a >=20 && a <=31){
				cout << "Bao Binh" <<endl;	
			}
			break;
			case 2 : 
			if (a >0 && a <=18 ) {
				cout << "Bao Binh" << endl;
			} else if ( a >=19 && a <=29){
				cout << "Song Ngu" <<endl;	
			}
			break;
			case 3 : 
			if (a >0 && a <=20 ) {
				cout << "Song Ngu" << endl;
			} else if ( a >=21 && a <=31){
				cout << "Bach Duong" <<endl;	
			}
			break;
			case 4 : 
			if (a >0 && a <=19 ) {
				cout << "Bach Duong" << endl;
			} else if ( a >=20 && a <=30){
				cout << "Kim Nguu" <<endl;	
			}
			break;
			case 5 : 
			if (a >0 && a <=20 ) {
				cout << "Kim Nguu" << endl;
			} else if ( a >=21 && a <=31){
				cout << "Song Tu" <<endl;	
			}
			break;
			case 6 : 
			if (a >0 && a <=20 ) {
				cout << "Song Tu" << endl;
			} else if ( a >=21 && a <=30){
				cout << "Cu Giai" <<endl;	
			}
			break;
			case 7 : 
			if (a >0 && a <=22 ) {
				cout << "Cu Giai" << endl;
			} else if ( a >=23 && a <=31){
				cout << "Su Tu" <<endl;	
			}
			break;
			case 8 : 
			if (a >0 && a <=22 ) {
				cout << "Su Tu" << endl;
			} else if ( a >=23 && a <=31){
				cout << "Xu Nu" <<endl;	
			}
			break;
			case 9 : 
			if (a >0 && a <=22 ) {
				cout << "Xu Nu" << endl;
			} else if ( a >=23 && a <=30){
				cout << "Thien Binh" <<endl;	
			}
			break;
			case 10 : 
			if (a >0 && a <=22 ) {
				cout << "Thien Binh" << endl;
			} else if ( a >=23 && a <=31){
				cout << "Thien Yet" <<endl;	
			}
			break;
			case 11 : 
			if (a >0 && a <=22 ) {
				cout << "Thien Yet" << endl;
			} else if ( a >=23 && a <=30){
				cout << "Nhan Ma" <<endl;	
			}
			break;
			case 12 : 
			if (a >0 && a <=21 ) {
				cout << "Nhan Ma" << endl;
			} else if ( a >=22 && a <=31){
				cout << "Ma Ket" <<endl;	
			}
		}
	}
}
