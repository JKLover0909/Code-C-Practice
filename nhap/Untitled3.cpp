#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long m=n;
    long long sum1=0, sum2 =0;
    while (n){
        sum1+=n%10;
        n/=10; }
        for (int i=2; i<=sqrt(m);i++){
            while (m%i==0){
                sum2 +=i;
                m/=i;
            }
        } if (m != 1){
            sum2 +=m; }
                if(sum1 == sum2){
                    cout << "YES\n";
                }
                else { cout <<"NO\n";
            }
        }

