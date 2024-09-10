#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double b = 0, c = 0;
    cout << "Введите два числа: " << endl;
    cin >> b >> c;
    if (b != 0) {
        cout << "x = " << -c / b;
    }
    else {
        cout << "Нет решений";
    }
}
