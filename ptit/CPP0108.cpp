#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

int giamdan(int a){
	int d; 
 do{
	d=a%10; a/=10;
	if(a==0) break;
	else
	{if(d>=(a%10))
	    {
	    return 0; 
		}}
	}while(a!=0);
	return 1;	
}


int tangdan(int a){
	int d; 
 do{
	d=a%10; a/=10;
	if(d<=(a%10))
		{
	    return 0; 	
		}
	}while(a!=0);
	return 1;	
}


int test(long long a){
	if (a<2)
	return 0;
	else if
	 ( a==2)
	return 1; 
    for (  int i=2; i<=sqrt(a);i++){
    	if (a%i==0) return 0;
	} return 1;
}
int main() {
	int T; cin >> T;
	while(T--){
		int a; cin >>a;
		int dem=0;
		for(int i=pow(10, a-1); i<pow(10,a); i++ ){
			if(tangdan(i)==1 || giamdan(i)==1){	
			if(test(i)==1){
				dem++;
			}}}
		
		cout << dem << endl;
}
}
	