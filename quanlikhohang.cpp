#include<bits/stdc++.h>
using namespace std;
struct MH{
	string ma, ten, hang, donvi;
	int nhap, ban;
};

bool cmp(MH a, MH b){
	int gia1 = a.ban - a.nhap, gia2 = b.ban - b.nhap;
	if(gia1 != gia2){
		return gia1 > gia2;
	}
	else return a.ma < b.ma;
}

string solve(string s){
	stringstream ss(s);
	string tmp, ten="";
	while(ss >> tmp){
		ten+=toupper(tmp[0]);
	}
	return ten;
}

int main(){
	int n; cin >> n;
	vector<MH> v;
	map<string, int> mp;
	for(int i = 0; i<n; i++){
		cin.ignore();
		string ten; getline(cin,ten);
		string hang; getline(cin,hang);
		string donvi; getline(cin,donvi);
		int nhap, ban; cin >> nhap >> ban;
		string ma = solve(ten);
		mp[ma]++;
		string tmp = to_string(mp[ma]);
		while(tmp.size()<4){
			tmp ="0"+tmp;
		}
		ma = ma + tmp;
		MH x {ma, ten, hang, donvi, nhap, ban};
		v.push_back(x);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto it : v){
		cout << it.ma<<" "<<it.ten<<" "<<it.hang<<" "<<it.donvi<<" "<<it.nhap<<" "<<it.ban<<endl;
	}
}
