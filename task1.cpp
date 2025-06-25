#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x * x * x - x - 2;
}


void bisection(double a, double b, double tolerance) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid initial interval." << endl;
        return;
    }
    double c;

    while (abs(b - a) >= tolerance) {
        c = (a + b) / 2.0;

        if (f(c) == 0.0) {
            break;
        }
        else if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    cout << "Root: " << c << endl;
}

int main() {
    double a = 1.0, b = 2.0;
    double tolerance = 0.0001;

    bisection(a, b, tolerance);

    return 0;
}
