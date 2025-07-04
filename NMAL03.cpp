#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return pow(x, 5) - 3 * x + 5;
}
double Firstde(double x) {
    return 5 * pow(x, 4) - 3;
}

void newtonRaphson(double x0, double tol = 1e-3) {
    double x1, error = 35;
    while (error > tol) {
        double fx = f(x0);
        double fpx = Firstde(x0);
        int i = 0;
        if (fpx == 0) {
            cout << "Derivative is zero. Method fails." << endl;
        return;
        }
        x1 = x0 - fx / fpx;
        if (i != 0)
            error = fabs((x1 - x0) / x1);
        else
            error = 100;
        x0 = x1;
        i++;
        cout << "Iteration " << i << ": x = " << x1 << ", f(x) = " << fx << ", error = " << error << endl;
    }
    cout << "\nRoot : "<< x1 << endl;
}

int main() {
    newtonRaphson(-0.1);
    return 0;
}
