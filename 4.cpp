#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;
    cout << "Введите три числа: " << endl;
    cin >> a >> b >> c;
    double disk = 0, disksqrt = 0;
    disk = b * b - 4 * a * c;
    disksqrt = sqrt(disk);
    if (c == 0 && a != 0 && b != 0) {
        cout << "x1 = 0" << endl;
        cout << "x2 = " << (-b) / a << endl;
    }
    if (a == 0 && b != 0) {
        cout << "x = " << (-c) / b << endl;
    }
    if (b == 0 && a != 0) {
        if (sqrt((-c) / a) > 0) {
            cout << "x = " << sqrt((-c) / a) << endl;
            cout << "x = -" << sqrt((-c) / a) << endl;
        }
        if (sqrt((-c) / a) == 0) {
            cout << "x = 0" << endl;
        }
        if (sqrt((-c) / a) < 0) {
            cout << "Нет решений" << endl;
        }
    }
    if (a != 0 && b != 0 && c != 0) {
        if (disk >= 0) {
            cout << "x1 = " << ((-b) + disksqrt) / (2 * a) << endl;
            cout << "x2 = " << ((-b) - disksqrt) / (2 * a) << endl;
        }
        else {
            cout << "Нет решений" << endl;
        }
    }
    if (a == 0 && b == 0) {
        cout << "Нет решений" << endl;
    }
}
