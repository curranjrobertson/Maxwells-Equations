#include <iostream>
#include <vector>
using namespace std;

double fluxThroughEncSurface(vector<int> q) {
    double Phi = 0.0;
    double e_0 = 8.8541878176e-12; // permittivity of free space in coulombs per volt-meter
    int q_enc = 0; // initiate

    for (int i = 1; i < q.size(); i++)
    {
        q[i] = q[i] * 1e-9;
        q_enc += q[i];
    }
    Phi = q_enc / e_0;
    return Phi; // Flux through surface in Vm
}

int main() {
vector<int> q = {1, 2, 3, 4, 5, 6, 7, 8, 9};
double Phi = fluxThroughEncSurface(q);

cout << "Flux through surface: " << Phi << " Vm" << endl;

return 0;
}