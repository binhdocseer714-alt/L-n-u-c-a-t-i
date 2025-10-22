#include <iostream>
#include <cmath>
#include <math.h> 
#include <iomanip>

using namespace std;

int main() {
    double depth_h;
    double angle_alpha_degrees;
    
    const double G_ACCELERATION = 9.81;
    const double PI_VALUE = 3.14159265358979323846;

    cout << "Enter the water depth h (meters): ";
    if (!(cin >> depth_h)) {
        return 1;
    }

    cout << "Enter the seabed slope angle alpha (degrees): ";
    if (!(cin >> angle_alpha_degrees)) {
        return 1;
    }

    double alpha_radians = angle_alpha_degrees * (PI_VALUE / 180.0);
    
    double term_inside_sqrt = G_ACCELERATION * depth_h * tan(alpha_radians);
    
    double wave_speed_v = sqrt(term_inside_sqrt);

    cout << fixed << setprecision(2);
    
    cout << "The calculated wave speed v is: " << wave_speed_v << " m/s" << endl;
    
    return 0;
}