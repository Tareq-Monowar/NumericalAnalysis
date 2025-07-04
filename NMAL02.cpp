#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return log(3 * x) - 3;
}

void falsi(double a, double b, double tol = 1e-4) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid" << endl;
        return;
    }
    double x = 0, pre_x = 0;
    double error = 100;
    int i = 0;
    while (error > tol) {
        pre_x = x;
        x = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (i != 0) error = fabs((x - pre_x) / x);
        else error = 100;
        cout << "Iteration " << i + 1 << ": x = " << x << ", error = " << error << endl;
        if (error < tol)
            break;
        if (f(x) == 0.0)
            break;
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        i++;
    }
    cout << "\nRoot = " << x << endl;
}

int main() {
    double a = 6, b = 7;
    falsi(a, b);
    return 0;
}