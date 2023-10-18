#include <iostream>

using namespace std;//tanpa menggunakan variable tambahan

int main()
{
    int firstValue = 10;
    int secondValue = 8;

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "setelah menukar\n";
    cout << "firstValue: " << firstValue << "\n";
    cout << "secondValue: " << secondValue << "\n";
    return 0;
}
