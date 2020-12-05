#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int opsi;
	int p, l;
	int t;
	cout << "Gambar Bangun Daftar =========\n";
	cout << "1. Kotak Bolong \n";
	cout << "2. Segitiga \n";
	cout << "\nPilih : "; cin >> opsi;
	
	switch (opsi){
		case 1:
		cout << "Panjang\t: "; cin >> p;
		cout << "Lebar\t: "; cin >> l;

		if (p > 2){
			for (int i=0; i < p; i++){
				for (int j=0; j < l; j++){
				if ((i == 0) || (i == p-1) || (j == 0) || (j == l-1)) {
					cout << (" *");
				} else {
				if (p % 2 == 1){
					cout<<("  ");
				} else {
					cout<<("  ");
				}
				}
				}
			cout << endl;
			}
		}
		break;
		case 2:
		cout << "\nTinggi\t: "; cin >> t;
		//
		for (int i = 1; i <= t; i++){
			int k = 1;
			int l = i;
			cout <<" ";
			for (int j = 1; j <= i; j++){
				cout << l << " " ;
				l = l + (t-k);
				k++;
			}
			cout << endl;
			
		}
		break;
		default:
		cout << "\nInput anda salah";
	}
	getch();
}








