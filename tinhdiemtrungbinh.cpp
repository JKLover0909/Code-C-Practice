#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	float a[t];
	for(int i=0;i<t;i++){
		cin >> a[i];
	}
	sort(a,a+t);
	int x=0;
	for(int i=1;i<t;i++){
		if(a[i]==a[0]){
		 a[i]=0;
		 x++;
		}
	}
	for(int i=t-2;i>=0;i--){
		if(a[i]==a[t-1]){
		 a[i]=0;
		 x++;
		}
	}
	float b=0;
	for(int i=1;i<t-1;i++){
		b=b+a[i];
	}
	printf("%.2f",b/(t-x-2));
		
}