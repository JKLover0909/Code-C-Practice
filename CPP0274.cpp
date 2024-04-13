#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int N; cin >> N;
		int a[N];
		for (int &x : a){
			cin >> x;
		}
		int B[100000] = {0};
		for(int i=0; i<N; i++){
			B[a[i]]++;
		}
		int d=0;
		for(int i=0; i<100000; i++)
		       {
		       	if(B[i]>1)
		       	   {
		       	   	d+=B[i];
				   }
			   }
		cout << d << endl;	      	
	}
}