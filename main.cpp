#include <iostream>

using namespace std;

int main()
{
    int batas;
    int totalGanjil = 0;
    int totalGenap = 0;
    int totalPrima = 0;
    int total = 0;
    do
    {
        cout << "masukkan batas bilangan positif: ";
        cin >> batas;
    }while (batas <= 0);{

    cout << "Bilangan ganjil antara 1 dan " << batas << " adalah: ";

    for (int i = 1; i <= batas; i++)
        {
          int bilanganGanjil = 1;
          if (i%2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Bilangan genap antara 1 dan " << batas << " adalah: ";

    for (int i = 1; i <= batas; i++)
    {
        int bilanganGenap = 1;
        if (i%2 ==0) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Bilangan prima antara 1 dan " << batas << " adalah: ";

    for (int i = 2; i <= batas; ++i)
    {
        int bilanganPrima = 1;
        for (int j = 2; j*j <= i; ++j)
        {
            if (i % j == 0 )
            {
              bilanganPrima = 0 ;
              break;
            }
        }
    if (bilanganPrima == 1)
      {
        cout << i << " ";
      }
    }

    for (int i=1; i <= batas; i+= 2){
        totalGanjil += i;
    }
        cout <<"\njumlah semua bilangan Ganjil antara 1 hingga " << batas << " adalah: " << totalGanjil <<endl;
}
    for (int i=2; i <= batas; i+= 2){
        totalGenap += i;
    }
        cout << "jumlah semua bilangan Genap antara 1 hingga " << batas << " adalah: " << totalGenap <<endl;

    for (int i = 2; i <= batas; ++i)
    {
        int bilanganPrima = 1;
        for (int j = 2; j*j <= i; ++j)
        {
            if (i % j == 0 )
            {
              bilanganPrima = 0 ;
              break;
            }
        }
    if (bilanganPrima == 1){
        totalPrima += i;
    }
   }
        cout << "jumlah semua bilangan prima antara 1 hingga " << batas << " adalah: " << totalPrima <<endl;


    cout << "faktor faktor dari jumlah Ganjil tersebut adalah: ";
    for (int i = 1; i <=totalGanjil;  i++){
        if (totalGanjil % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "faktor faktor dari jumlah Genap tersebut adalah: ";
    for (int i = 1; i <= totalGenap;  i++){
        if (totalGenap % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "faktor faktor dari jumlah Prima tersebut adalah: ";
    for (int i = 1; i <= totalPrima;  i++){
        if (totalPrima % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;


    return 0;
}


