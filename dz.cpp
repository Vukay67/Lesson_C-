#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double u, x = -4.5, y = 0.75 * pow(10, -4), z = 0.845 * pow(10, 2);

    u = cbrt(8 + pow(fabs(x - y), 2) + 1) / (x * x + y * y + 2) - exp(fabs(x - y)) * pow(pow(tan(z), 2) + 1, x);

    cout << "u = " << u << endl;

    return 0;
}

