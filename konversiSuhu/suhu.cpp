#include<iostream>							//BINTI SHOLIKHAH (2100018299)
using namespace std;

int main(){
	double celcius, reamur, fahrenheight, kelvin;
	int pilihan;
		
	cout << "=====================================================\n";
	cout << "             PROGRAM KONVERSI SUHU\n";
	cout << "=====================================================\n";
	cout << endl;
	cout << " Masukkan suhu dalam CELCIUS: ";
	cin >> celcius;
	cout << endl;
	cout << " [1] REAMUR      [2] FAHRENHEIGHT    [3] KELVIN\n\n";
	cout << " Masukkan pilihan anda: ";
	cin >> pilihan;
	if(pilihan == 1){
        reamur = (4.0/5.0)*celcius;
        cout << " Suhu dalam REAMUR: " << reamur;
    }
	else if (pilihan == 2) {
        fahrenheight = (9.0/5.0)*celcius+32;
        cout << " Suhu dalam FAHRENHEIGHT: " << fahrenheight;
    }
	else{
        kelvin=celcius+273.15;
        cout << " Suhu dalam KELVIN: " << kelvin;
	}
}
