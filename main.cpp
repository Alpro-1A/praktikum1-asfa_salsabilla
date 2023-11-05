#include <iostream>

using namespace std;

int main()
{

    int angka; //gambar bintang dari yang terbesar
    cout << "masukkan jumlah batasan: ";
    cin >> angka;
    for (int i = 0; i <= angka; i++){
        for (int j = 1; j<= angka-i; j++){
            cout << " ";
        }
    for (int t = 1; t <= 2*i-1; t++){
        cout << "*";
        }
        cout << endl;
    }
    return 0;
}
