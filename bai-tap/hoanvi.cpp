#include<bits/stdc++.h> 
using namespace std; 

void in(int a[],int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
} 

int check(int a[],int n){
    for(int i=1;i<=n;i++){
        if(a[i] != n-i+1) return 0;
    }
    return 1;
}

int main(){
    int n,kiemtra=0;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){a[i]=i;}// Khai báo mảng ban đầu
    in(a,n);
    while(check(a,n)==0){//Kiểm tra xem phải mảng cuối chưa
        int t=n-1;
        while(t>=1){//TÌM VỊ TRÍ I
            if(a[t]<a[t+1])break;
            t--;
        }
        //Tìm phần tử thay thế phần tử i 
        int jmin=t+1;
        for(int j=t+2;j<=n;j++){
            if(a[j]<a[jmin] && a[j]>a[t]){jmin=j;}//TÌM PHẦN TỪ  BÉ NHẤT TỪ I+1 ĐẾN N LỚN HƠN A[I]
        }
        swap(a[jmin],a[t]);

        sort(a+t+1,a+n+1);//Sắp xếp phần phía sau i
        in(a,n);
    }
}
