#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "masukkan angka pertama: ";
    cin >> x;
    cout << "masukkan angka kedua: ";
    cin >> y;
    cout << "masukkan angka ketiga: ";
    cin >> z;

    int terbesar = x;
    if(y > terbesar){
      terbesar = y;

    } else if(z > terbesar){
        terbesar = z;
    }
    cout << "angka terbesar adalah: " << terbesar << endl;
    return 0;
}
