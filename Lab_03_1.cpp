// Lab_03_1.cpp
// < Костирко Олександр Андрійович >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 2 + 6*x;

    
    if (x <= 0)
        B = log(fabs(cos(x))) + pow(x, 5);
    if (0 < x && x <= 3)
        B = 1 / tan((1 + log(x)) / 3);
    if (x > 3)
        B = 12*x - pow(x, 8);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    if (x <= 0)
        B = log(fabs(cos(x))) + pow(x, 5);
    else
        if (x > 3)
            B = 12*x - pow(x, 8);
        else
            B = 1 / tan((1 + log(x)) / 3);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    cin.get();
    return 0;
}
