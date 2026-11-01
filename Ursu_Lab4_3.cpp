#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, h, x, y;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter step h: ";
    cin >> h;

    if (a > b || h <= 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    cout << fixed << setprecision(4);

    cout << "-----------------------" << endl;
    cout << setw(10) << "x"
         << setw(12) << "Y" << endl;
    cout << "-----------------------" << endl;

    for (x = a; x <= b + 1e-9; x += h) {
        double t = x * x;

        if (fabs(cos(t)) < 1e-10) {
            cout << setw(10) << x
                 << setw(12) << "Undefined" << endl;
        }
        else {
            y = tan(t) + x - 3;

            cout << setw(10) << x
                 << setw(12) << y << endl;
        }
    }

    return 0;
}
