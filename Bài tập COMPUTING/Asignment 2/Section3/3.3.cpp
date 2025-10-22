#include <iostream>
#include <cmath>
#include <math.h> 
#include <iomanip>

using namespace std;

int main() {
    const double AMPLITUDE_A = 5.0;
    const double ANGLE_THETA_DEGREES = 30.0;

    const double PI_VALUE = 3.14159265358979323846;
    
    double theta_radians = ANGLE_THETA_DEGREES * (PI_VALUE / 180.0);
    
    double wave_height_H = AMPLITUDE_A * sin(theta_radians);
    
    cout << fixed << setprecision(2);
    
    cout << "The calculated wave height H is: " << wave_height_H << " meters" << endl;
    
    return 0;
}