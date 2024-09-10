#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double a = 0, b = 0;
    cout << "Введите 2 числа a и b: " << endl;
    cin >> a >> b;
    cout << "Сумма = " << a + b << "\n";
    cout << "Разность a и b = " << a - b << "\n";
    cout << "Разность b и a = " << b - a << "\n";
    cout << "Произведение = " << a * b << "\n";
    if (b != 0) {
        cout << "Частное a и b = " << a / b << "\n";
    }
    else {
        cout << "Делить на 0 нельзя" << "\n";
    }
    if (a != 0) {
        cout << "Частное b и a = " << b / a << "\n";
    }
    else {
        cout << "Делить на 0 нельзя" << "\n";
    }
}

