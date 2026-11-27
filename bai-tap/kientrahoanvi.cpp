#define FOR(i,a,b) for(long i=a;i<=b;i++)
#define FOD(i,a,b) for(long i=a;i>=b;i--)
#include<bits/stdc++.h> 
using namespace std; 

int n,k,b[101],a[101];

bool isPrime(int X){//ham kiem tra nguyen to
    if(X<2)return 0;
    if(X<4)return 1;
    if(X%2==0||X%3==0)return 0;
    if(X<25)return 1;
    for(int i = 5;i<=sqrt(X);i+=6){
        if(X%i==0||X%(i+2)==0)return 0;
    }
    return 1;
}

void in(){// ham in man hinh
    for(int i=1;i<=n;i++){
        cout<<a[b[i]]<<' ';
    }
    cout<<endl;
} 

void isArrayPrime(){//kiem tra xem co phai a[b[]] la duong nguyen to bac k khong
    int sum=0;
    sum+=a[b[1]];
    FOR(i,1,n-k+1){
        sum=0;
        FOR(j,1,k){
            sum+=a[b[j+i-1]];
        }
        if(isPrime(sum)==0)return;//tong day k khong la nguyen to thi return
    }
    in();
    return;
}

int check(){//kiem tra xem phai la chinh hop cuoi cung chua con dang b[i] = n --> 1
    for(int i=1;i<=n;i++){
        if(b[i] != n-i+1) return 0;
    }
    return 1;
}

int main(){
    cin>>n>>k;
    FOR(i,1,n)cin>>a[i];//Mang luu gia tri
    for(int i=1;i<=n;i++){b[i]=i;}//mang vi tri
    while(check()==0){//kiem tra xem phai la chinh hop cuoi cung chua
        isArrayPrime();//kiem tra xem phai day thoa man thi in ra 
        int t=n-1;
        while(t>=1){//tim vi tri bien t; b[0] den b[t-1] giu nguyen
            if(b[t]<b[t+1])break;
            t--;
        }
        int jmin=t+1;
        for(int j=t+2;j<=n;j++){    
            if(b[j]<b[jmin] && b[j]>b[t]){jmin=j;} // tim vi nho nhat tu b[t+1] den b[n] va lon hon b[t]
        }
        swap(b[jmin],b[t]);//tim duoc phan tu b[t]
        sort(b+t+1,b+n+1);//sap xep lai b[t+1] den b[n]
    }
    isArrayPrime();//kiem tra xem phai day thoa man thi in ra 
}
