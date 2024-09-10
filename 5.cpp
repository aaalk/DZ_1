#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int den = 0, sht = 0, lampa = 0;
    cout << "если на улице день введите '1', иначе - '0'" << endl;
    cin >> den;
    cout << "если раздвинуты шторы введите '1', иначе - '0'" << endl;
    cin >> sht;
    cout << "если включена лампа введите '1', иначе - '0'" << endl;
    cin >> lampa;
    if ((den == 1 && sht == 1) || (lampa == 1)) {
        cout << "В комнате светло" << endl;
    }
    else {
        cout << "В комнате темно" << endl;

    }
}
