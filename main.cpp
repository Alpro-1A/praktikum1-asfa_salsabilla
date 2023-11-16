#include <iostream>

   using namespace std;

   void evaluasiNilai(int nilai);

   int main() {
      int nilai;
      cout << "Masukkan score yang diterima: ";
      cin >> nilai;

   evaluasiNilai(nilai);

    return 0;
}
   void evaluasiNilai(int nilai) {
     if (nilai >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A" << endl;
     } else if (nilai >= 80) {
        cout << "Anda mendapatkan nilai B" << endl;
     } else if (nilai >= 70) {
        cout << "Anda mendapatkan nilai C" << endl;
     } else if (nilai >= 60) {
        cout << "Anda mendapatkan nilai D" << endl;
     } else if (nilai < 60) {
        cout << "Anda mendapatkan nilai E" << endl;
     }
}
