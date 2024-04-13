#include<bits/stdc++.h>
using namespace std;

int k, n, X[100]; 

bool final = false; 

void init(){
    for(int i = 1; i <= k; i++){
            X[i] = i;
        }
}

void sinh(){
    int i = k;
    while(i >= 1 && X[i] == n - k + i){
        --i;
        }
    if(i == 0){
        final = true;
        }
    else{
        X[i]++;
        for(int j = i + 1; j <= k; j++){
            X[j] = X[j - 1] + 1;
            }
        }
}

int main(){
    cin >> n >> k;
    init(); 
    while(!final){
        for(int i = 1; i <= k; i++){
            cout << X[i];
            }
        cout << endl;
        sinh();
        }
}