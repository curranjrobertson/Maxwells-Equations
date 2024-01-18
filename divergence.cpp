#include <iostream>
#include <vector>
#include <functional>
#include <limits>
#include <cmath>
using namespace std;

typedef std::function<double(double)> RealFunc;
typedef std::function<double(std::function<double(double)>, double)> RealFuncDerivative;

double electricField(double x, double y, double z) {
    return pow(x, 3) + 2.0 * pow(x, 2) + 10.0 * x - 20.0;
}

double partialDerivatives(RealFunc f, double x, double y, double z) {
    double h = sqrt(std::numeric_limits<double>::epsilon());
    double delfx = (f(x + h) - f(x - h)) / (2.0 * h);
    return delfx;

    double delfy = (f(y + h) - f(y - h)) / (2.0 * h);
    return delfy;

    double delfz = (f(z + h) - f(z - h)) / (2.0 * h);
    return delfz;
}

double divergence(double delfx, double delfy, double delfz) {
    double i, j, k; 
    double divF = delfx * i + delfy * j + delfz * k;
}

int main() {

}