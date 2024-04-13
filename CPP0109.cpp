#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
using namespace std;
int test(long int a){
	int c=0, d=0;
	do{if(a%2==0){c+=1;
		} else { d+=1;}
		a/=10;
	} while(a>0);
	if (c==d){
			return 1;
		} else { return 0;}
}
int main() {
	int mang[10];
	long int a;
	cin >> a;
	int b;
	int c=0;
	for(long int i=pow(10,a-1);i<pow(10,a+1);i++){
		if (test(i)==1)
		{
			mang[c]=i;
			cout << mang[c] << " ";
		    c++;
		    if(c==10){
			          cout <<"\n";
		              c=0;	
			          }
		}
	}
}
