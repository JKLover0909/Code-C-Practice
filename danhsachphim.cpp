#include <bits/stdc++.h>
using namespace std;

int phim[1000], theloai[100], a = 0, b = 0;

class TheLoai{
	public:
		string kind;
		int number;
		friend istream &operator >> (istream &input, TheLoai &tl){
			++a;
			tl.number = a;
			getline(input, tl.kind);
			return input;
		}
};
class Phim{
    public:
		string id, name, k;
		int series, num, day, month, year;
		char x;
		friend istream &operator >> (istream &input, Phim &p){
			++b;
			p.num = b;
			scanf("\n");
			getline(input, p.id);
			input >> p.day >> p.x >> p.month >> p.x >> p.year;
			cin.ignore();
			getline(input, p.name);
			input >> p.series;
			return input;
		}
		friend ostream &operator << (ostream &output, Phim &p){
			if(p.num < 10) output << "P00" << p.num << " " << p.k << " ";
			else if(p.num < 100) output << "P0" << p.num << p.k << " ";
			else output << "P" << p.num << p.k << " ";
			if(p.day < 10) output << "0" << p.day << "/";
			else output << p.day << "/";
			if(p.month < 10) output << "0" << p.month << "/";
			else output << p.month << "/";
			output << p.year << " " << p.name << " " << p.series << endl;
			return output;
		}
};
void process(TheLoai tl[], int n, Phim p[], int m){
	for(int i = 0; i < m; ++i){
		int inum = 100 * ((int)p[i].id[2] - 48) + 10 * ((int)p[i].id[3] - 48) + ((int)p[i].id[4] - 48);
		p[i].k = tl[inum - 1].kind;
	}
	for(int i = 0; i < m; ++i){
		for(int k = i + 1; k < m; ++k){
			if(p[k].year < p[i].year) swap(p[k], p[i]);
			else if(p[k].year == p[i].year){
				if(p[k].month < p[i].month) swap(p[k], p[i]);
				else if(p[k].month == p[i].month){
					if(p[k].day < p[i].day) swap(p[k], p[i]);
					else if(p[k].day == p[i].day){
						if(p[k].name < p[i].name) swap(p[k], p[i]);
						else if(p[k].name == p[i].name){
							if(p[k].series > p[i].series) swap(p[k], p[i]);
						}
					}
				}
			}
		}
	}
}
int main(){
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}
