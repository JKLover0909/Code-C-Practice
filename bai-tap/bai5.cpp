#include<bits/stdc++.h>
using namespace std;
struct sv{
    string ma, ten, msv, ns;
    double gpa;
};

bool cmp(sv a, sv b){
	if (a.gpa==b.gpa){
		return a.ma < b.ma;}
    return a.gpa > b.gpa;
}

string nsxin(string s){
    string s2="";
    if (s[1]=='/') {s2 ='0'+ s; s=s2;}
    else s2 = s;
    if (s2[4]=='/'){
        s2 = "";
        for(int i = 0; i<=2;i++)
        {s2 = s2 + s[i];}
        s2 = s2 + "0";
        for(int i =3; i<s.size();i++){
            s2 =s2 + s[i];
        }
    }
    return s2;
}


string tenxin(string s){
    vector<string> v;
    stringstream ss(s);
    string tmp, ten2="";
    while(ss>>tmp){
        tmp[0]=toupper(tmp[0]);
        for(int i=1; i<tmp.size();i++){
            tmp[i]=tolower(tmp[i]);
        }
        v.push_back(tmp);
    }
        for(auto x : v){
        ten2 = ten2+ x + " ";
    }
    return ten2;
}

int main(){
    int t; cin >> t;
    vector<sv> v;
    for(int i=1; i<=t; i++){
        cin.ignore();
        string ten1; getline(cin,ten1);
        string msv; getline(cin,msv);
        string ns1; getline(cin,ns1);
        string ma = "";
        ma =ma+to_string(i);
        while(ma.size()<3){
            ma= "0"+ma;
        }
        ma = "SV" + ma;
        string ten = tenxin(ten1);
        string ns = nsxin(ns1);
        double gpa; cin >> gpa;
        sv x {ma, ten, msv, ns, gpa};
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x : v){
        cout << x.ma<<" "<<x.ten<<x.msv<<" "<<x.ns<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
    }
}