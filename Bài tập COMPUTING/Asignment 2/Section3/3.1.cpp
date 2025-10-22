#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    const double ENERGY_GIGA_JOULES = 11220184543.02;
    const double GIGA_TO_JOULE = 1e9;

    double E_joules = ENERGY_GIGA_JOULES * GIGA_TO_JOULE;
    
    const double CONSTANT_B = 4.8;
    const double COEFFICIENT_A = 1.5;

    double M_magnitude = (log10(E_joules) - CONSTANT_B) / COEFFICIENT_A;
    
    cout << fixed << setprecision(2);
    
    cout << "The magnitude M of the Great Chilean Earthquake is: " << M_magnitude << endl;
    
    return 0;
}