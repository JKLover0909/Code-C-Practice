#include<bits/stdc++.h>
using namespace std;
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
int main()
{
	long long a;
		cin >> a;
		long long b=0,temp=a;
		if (test(a)==1) { cout << a << " " << "1" << endl;}
		else {
		for (int j=2;j<=sqrt(a);j++)
		{
			if (temp%j==0)
			cout << j;
			while (temp%j==0)
			{
				temp/=j;
				b+=1;
			}
			if (b!=0)
			cout<< " " << b << endl;
			b=0;
		}
}}
	
