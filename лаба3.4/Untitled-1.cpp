// Lab_03_4.cpp
// Костирко Олександр Андрійович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8
 
#include <iostream>
 
using namespace std;
 
int main()
{
    double R;    // вхідний параметр (радіус)
    double x;    // вхідний аргумент (абсциса точки)
    double y;    // вхідний аргумент (ордината точки)
 
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    if (( x >= 0 && x * x + y * y <= R * R ) ||
        ( x <= 0 && y >= -x && y <= R ) ||
        ( x <= 0 && y <= x && y >= -R ))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
 
    cin.get();
    cin.get();
    return 0;
}
