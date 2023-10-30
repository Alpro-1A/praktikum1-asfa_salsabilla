#include <iostream>

using namespace std;

int main()
{
    int pilihan;
    cout << "ketik angka untuk bentuk bangun datar yang diinginkan: " <<endl;
    cout << "1. Persegi" <<endl;
    cout << "2. Persegi Panjang" <<endl;
    cout << "3. Segitiga" <<endl;
    cin >> pilihan;
    int luas;

    switch (pilihan){
       case 1:
            int sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi*sisi;
            cout << "luas persegi adalah: "<< luas;
            break;
       case 2 :
            int panjang, lebar;
            cout << "masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang*lebar;
            cout << "luas persegi panjang adalah: " << luas;
            break;
       case 3 :
            int alas, tinggi;
            cout << "masukkan alas segitiga: ";
            cin >> alas;
            cout << "masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5*alas*tinggi;
            cout << "luas segitiga adalah: " <<luas;
            break;
       default:
            cout << "pilihan tidak valid." <<endl;
    }
    return 0;
}
