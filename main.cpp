#include <iostream>

using namespace std;

int main()
{
    int banyakBebek, banyakTeman, sisa;
    cout << "masukkan banyak bebek: ";
    cin >> banyakBebek;
    cout << "masukkan banyak teman: ";
    cin >> banyakTeman;
    sisa = banyakBebek % banyakTeman;
    cout << "sisa bebek milik pak Tatang = " << sisa;
    return 0;
}
