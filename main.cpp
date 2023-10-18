#include <iostream>

using namespace std;

int main() //dengan variable tambahan
{
    int firstValue = 10;
    int secondValue = 8;

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "setelah menukar\n";
    cout << "firstValue: " << firstValue << "\n";
    cout << "secondValue: " << secondValue << "\n";

    return 0;
}
