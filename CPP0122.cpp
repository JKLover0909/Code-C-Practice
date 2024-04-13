#include<bits/stdc++.h>
using namespace std;
long long ul(long long a,long long b){
	if (b==0)
	return a; 
    return ul (b, a%b);
}

long long bc(long long a, long long b){
	return (a*b)/ul(a,b);}
	
	
int main(){
	int i;
	cin >> i;
	while(i--){
	long long a;
	cin >> a;
	long long b=a;
	while(a>1){
		b = bc (b, a-1);
		a--;
	} cout << b << endl;
}}

