#include<iostream>
using namespace std;
int main() {
	int a;
	cin >>a;
	while(a--){
		int b, c=0;
	    cin >> b;
	    while (b>9){
	    	if ((b%10==0)||(b%10==6)||(b%10==8)){
	    		b/=10;
			}else 
	    	{c+=1;
	    	break;}
		}
		if(c==0){
			cout << "YES" <<"\n";
		} else { cout << "NO" <<"\n";
		}
}}
