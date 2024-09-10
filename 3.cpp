#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double b = 0, c = 0;
    cout << "Введите два числа: " << endl;
    cin >> b >> c;
    if (b != 0) {
        cout << "x = " << -c / b;
    }
    else {
        cout << "Нет решений";
    }
    return 0;
}
