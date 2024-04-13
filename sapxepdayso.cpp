#include<bits/stdc++.h>
using namespace std;
void insert(long int a[], int &n,long int x, int k){
	n++;
	for(int i=n-1;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long int  a[1000], b[1000], c[1000], max = 0 ;
		int n, k, i1= 0 ,i2=0, x1=0, x2=0,d;
		cin >> n >> k;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(max<a[i]){
				max = a[i];
				d=i;
			}
		}
		insert(a,n,k,d);
		for(int i = 0;i<n;i++){
			if(a[i]<0){
				b[i1]=a[i];
				i1++;
				x1++;
			} else{ c[i2] = a[i];
			i2++;
			x2++;
			
			}
		}
		for(int i1=0; i1<x1 ; i1++){
			cout << b[i1] << " ";
		}
		for(int i2=0;i2<x2;i2++){
			cout <<c[i2]<<" ";
		}
		cout <<endl; 
	}
}

