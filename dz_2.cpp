#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double n1, n2;
    cout << "1. Введите два положительных числа: ";
    cin >> n1 >> n2;
    cout << "Среднее арифметическое = " << (n1 + n2) / 2 << endl << endl;

    double side;
    cout << "2. Введите сторону квадрата: ";
    cin >> side;
    cout << "Площадь = " << pow(side, 2) << endl << endl;

    int p, q, r;
    cout << "3. Введите три целых числа: ";
    cin >> p >> q >> r;
    cout << "Сумма = " << p + q + r << endl;
    cout << "Разность = " << p - q - r << endl;
    cout << "Произведение = " << p * q * r << endl << endl;

    int a, b;
    cout << "4. Введите целые числа a и b (b != 0): ";
    cin >> a >> b;
    a = a % b;
    cout << "a = " << a << endl << endl;

    double x, y;
    cout << "5. Введите x и y: ";
    cin >> x >> y;
    cout << "Результат = " << 3 * pow(x, 4) - 5 * pow(x, 3) * pow(y, 2) + 2 * pow(x, 3) + 0.2 * pow(y, 2) << endl << endl;

    double xx, aa;
    cout << "6. Введите x и a (a != 0): ";
    cin >> xx >> aa;
    cout << "t2 = " << 2 * xx / pow(aa, 2) * sin(aa * xx) - (pow(xx, 2) / aa - 2 / pow(aa, 3)) * cos(aa * xx) << endl;

    return 0;
}