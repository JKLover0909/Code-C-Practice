#include <iostream>
using namespace std;

int main() 
{
	bool muc_tieu[4][4] = {
	{ 0, 1, 0, 1 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 1, 0, 0, 0 }
};
    int Ha_guc = 0;
    int So_lan_ban = 0;
    while (Ha_guc < 4){
    	int hang, cot;
    	cout << "Chon muc tieu\n";
    	cout << "Chon hang tu 0 den 3: ";
    	cin >> hang;
    	cout << "Chon cot tu 0 den 3: ";
    	cin >> cot;
    	if (muc_tieu[hang][cot]) {
    		muc_tieu[hang][cot] = 0;
    		Ha_guc++;
    		cout << "Chinh xac! con " << (4-Ha_guc) << " muc tieu.\n\n";
		}
		else {
		cout << "Hut con me no roi\n\n";
		}
		So_lan_ban++;
	}
	cout << "Chuc mung ban da thang trong " << So_lan_ban << "luot\n";
    
	
}
