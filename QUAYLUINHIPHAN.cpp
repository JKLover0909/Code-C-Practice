#include<bits/stdc++.h>
using namespace std;

int x[10001], n;

bool check (){
	for(int i = 1; i<=n; i++){
		if(x[i]==1&&x[i+1]==1) return 0;
	}
	return 1;
}

bool check2 (){
	for(int  i = 4; i<= n; i++){
		if(x[i-3]==0&&x[i-2]==0&&x[i-1]==0&&x[i]==0) return 0;
	}
	return 1;
}

void in(){
	if(x[1]==1 && x[n]==0){
		if(check()){
			if(check2()){
			for(int i = 1; i<=n; i++){
				if (x[i]==1) cout <<"8";
				else cout <<"6";
			}
		cout << endl;	
		}}
	}
	
}

void Try(int i){
	for(int j = 0; j<= 1; j++){
		x[i] = j;
		if(i == n){
			in();
		}
		else {
			Try(i+1);
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}