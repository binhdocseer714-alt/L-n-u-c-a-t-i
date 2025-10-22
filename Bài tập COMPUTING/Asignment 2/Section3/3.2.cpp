#include <iostream>
#include <cmath>
#include <math.h> 
#include <iomanip>

using namespace std;

int main() {
    double magnitude_M;
    double energy_E_joules;

    cout << "Enter the earthquake magnitude (M): ";
    if (!(cin >> magnitude_M)) {
        return 1;
    }

    const double EXPONENT_CONSTANT = 4.8;
    const double M_COEFFICIENT = 1.5;
    double exponent = (M_COEFFICIENT * magnitude_M) + EXPONENT_CONSTANT;

    energy_E_joules = pow(10.0, exponent);

    cout << fixed << setprecision(2);
    
    cout << "The energy E released in joules is: " << energy_E_joules << endl;
    
    return 0;
}