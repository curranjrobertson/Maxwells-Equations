#include <iostream>
#include <vector>
#include <functional>
#include <limits>
#include <cmath>
using namespace std;

typedef std::function<double(double)> RealFunc;
typedef std::function<double(std::function<double(double)>, double)> RealFuncDerivative;

std::vector<double(double x, double y, double z)> electricField(2 * x, 3 * y, 4 * z);

double partialDerivatives(RealFunc f, double x, double y, double z) {
    double h = sqrt(std::numeric_limits<double>::epsilon());
    double delfx = (f(x + h) - f(x - h)) / (2.0 * h);

    double delfy = (f(y + h) - f(y - h)) / (2.0 * h);

    double delfz = (f(z + h) - f(z - h)) / (2.0 * h);
    return delfx, delfy, delfz;
}

double divergence(double delfx, double delfy, double delfz) {
    double divF = delfx + delfy + delfz;
}

int main() {
    RealFunc f{electricField }
    
    cout << "Divergence of Electric Field: " << divF << endl;
}