#include<bits/stdc++.h>
using namespace std;
void in (int a[], int n){
	for(int i = 1; i<=n; i++){
		cout << a[i]<<" ";
	}
	cout <<endl;
}
bool check (int a[], int n){
	for(int i = 1; i<n; i++){
		if(a[i]<a[i+1]) return 0;
	} return 1;
}

int main(){
	int t, c, b; cin >> t;
	int a[t+1];
	for(int i = 1; i<=t; i++){
		a[i]=i;
	}
	in(a,t);
	while(!check(a,t)){
		for(int i = t; i>1; i--){
			if(a[i]>a[i-1]){
				c=a[i];
				b=i;
				for(int y = i; y<=t; y++){
					if (a[y]<c&&a[y]>a[i-1]) {c=a[y]; b = y;}
				}
				swap(a[i-1],a[b]);
				for(int x = i; x <=t; x++) {cout << a[x]<<" ";
				}
				cout << endl;
				cout <<"i="<< i <<" "<<"t="<< t<< endl;
				sort(a+i,a+t);
				for(int x = i; x <=t; x++) {cout << a[x]<<" ";
				}
				cout << endl;
				in(a,t);
			    break;
			}
		}
	}
}
